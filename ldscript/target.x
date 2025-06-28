/* $Id: target.x,v 1.10 2018/03/21 21:26:54 clare Exp $ */
/*
 * linker script for PIC32MX210 device
 */
OUTPUT_FORMAT(elf32-littlemips)
OUTPUT_ARCH(mips)
ENTRY(start)

/*
 * virtual and physical memory layout
 */
MEMORY
{
  /*
   * physical region
   */
  phys_ram  : o = 0x00000000, l = 4K
  phys_rom  : o = 0x1D000000, l = 16K
  phys_boot : o = 0x1FC00000, l = 0x00000BF0
  phys_cfg  : o = 0x1FC00BF0, l = 0x0000000F
  /*
   * virtual region
   */
  kern_ram  : o = 0x80000000, l = 4K
}

SECTIONS
{
  .boot
  0xBFC00000 :
  ALIGN(4)
  {
    *(.text.boot)
  } AT > phys_boot

  .kern
  0x9FC00000 + SIZEOF(.boot) :
  ALIGN(4)
  {
    *(.text.kern)
  } AT > phys_boot

  .text
  0x9D000000 :
  ALIGN(4)
  {
    *(.text)
    *(.text.*)
    *(.rodata)
    *(.rodata.*)
    *(.strings)
    *(.strings.*)
  } AT > phys_rom

  .data
  0x80000000 :
  ALIGN(4)
  {
    _gp = . + 0x8000;
    _data_start = .;
    _data_rom_base  = 0x80000000 + LOADADDR(.data);
    *(.sdata)
    *(.sdata.*)
    *(.data)
    *(.data.*)
    _data_end = .;
  } > kern_ram AT > phys_rom

  .bss
  0x80000000 + SIZEOF(.data) :
  ALIGN(4)
  {
    _bss_start = .;
    *(.sbss)
    *(.sbss.*)
    *(.bss)
    *(.bss.*)
    *(.scommon)
    *(.scommon.*)
    *(COMMON)
    _bss_end = .;
    _stack_top = 0x80000000 + LENGTH(phys_ram);
  } > kern_ram AT > phys_ram
}
