/* $Id: start.S,v 1.11 2018/03/21 18:47:30 clare Exp $ */
/*
 * startup routine for PIC32
 */

/*
 * reset vector
 */
	.section .text.boot
	.global start
	.set	nomips16
	.type	start, @function
	.ent	start
start:
	la	$t0, _start
	jr	$t0
	.end	start

/*
 * initialization
 */
	.section .text.kern
	.global _start
	.global _halt
	.type	_start, @function
	.ent	_start
_start:
	la	$sp, _stack_top
	la	$gp, _gp
	jal	_init_data
	jal	_init_bss
	la	$t0, main
	jalr	$t0
_halt:
	j	_halt
	.end	_start

/*
 * initialize DATA area
 */
	.section .text.kern
	.global	_init_data
	.type	_init_data, @function
 	.ent	_init_data
_init_data:
	la	$t0, _data_rom_base
	la	$t1, _data_start
	la	$t2, _data_end
	b	_init_data_check
_init_data_step:
	lw	$t3, ($t0)
	sw	$t3, ($t1)
	addu	$t0, 4
	addu	$t1, 4
_init_data_check:
	bltu	$t1, $t2, _init_data_step
	jr	$ra
	.end	_init_data

/*
 * initialize BSS area
 */
	.section .text.kern
	.global	_init_bss
	.type	_init_bss, @function
 	.ent	_init_bss
_init_bss:
	la	$t0, _bss_start
	la	$t1, _bss_end
	b	_init_bss_check
_init_bss_step:
	sw	$zero, ($t0)
	addu	$t0, 4
_init_bss_check:
	bltu	$t0, $t1, _init_bss_step
	jr	$ra
	.end	_init_bss
