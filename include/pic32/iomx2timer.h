/* $Id: iomx2timer.h,v 1.2 2016/05/29 20:19:44 clare Exp $ */
/*
 * special function registers
 */
#ifndef __PIC32MX2XX_TIMER_H
#define __PIC32MX2XX_TIMER_H

/*
 * timer1 registers
 */
#define T1CON		__SFR__(0xBF800600)
#define T1CONCLR	__SFR__(0xBF800604)
#define T1CONSET	__SFR__(0xBF800608)
#define T1CONINV	__SFR__(0xBF80060C)
#define TMR1		__SFR__(0xBF800610)
#define TMR1CLR		__SFR__(0xBF800614)
#define TMR1SET		__SFR__(0xBF800618)
#define TMR1INV		__SFR__(0xBF80061C)
#define PR1		__SFR__(0xBF800620)
#define PR1CLR		__SFR__(0xBF800624)
#define PR1SET		__SFR__(0xBF800628)
#define PR1INV		__SFR__(0xBF80062C)

/*
 * timer2 registers
 */
#define T2CON		__SFR__(0xBF800800)
#define T2CONCLR	__SFR__(0xBF800804)
#define T2CONSET	__SFR__(0xBF800808)
#define T2CONINV	__SFR__(0xBF80080C)
#define TMR2		__SFR__(0xBF800810)
#define TMR2CLR		__SFR__(0xBF800814)
#define TMR2SET		__SFR__(0xBF800818)
#define TMR2INV		__SFR__(0xBF80081C)
#define PR2		__SFR__(0xBF800820)
#define PR2CLR		__SFR__(0xBF800824)
#define PR2SET		__SFR__(0xBF800828)
#define PR2INV		__SFR__(0xBF80082C)

/*
 * timer3 registers
 */
#define T3CON		__SFR__(0xBF800A00)
#define T3CONCLR	__SFR__(0xBF800A04)
#define T3CONSET	__SFR__(0xBF800A08)
#define T3CONINV	__SFR__(0xBF800A0C)
#define TMR3		__SFR__(0xBF800A10)
#define TMR3CLR		__SFR__(0xBF800A14)
#define TMR3SET		__SFR__(0xBF800A18)
#define TMR3INV		__SFR__(0xBF800A1C)
#define PR3		__SFR__(0xBF800A20)
#define PR3CLR		__SFR__(0xBF800A24)
#define PR3SET		__SFR__(0xBF800A28)
#define PR3INV		__SFR__(0xBF800A2C)

/*
 * timer4 registers
 */
#define T4CON		__SFR__(0xBF800C00)
#define T4CONCLR	__SFR__(0xBF800C04)
#define T4CONSET	__SFR__(0xBF800C08)
#define T4CONINV	__SFR__(0xBF800C0C)
#define TMR4		__SFR__(0xBF800C10)
#define TMR4CLR		__SFR__(0xBF800C14)
#define TMR4SET		__SFR__(0xBF800C18)
#define TMR4INV		__SFR__(0xBF800C1C)
#define PR4		__SFR__(0xBF800C20)
#define PR4CLR		__SFR__(0xBF800C24)
#define PR4SET		__SFR__(0xBF800C28)
#define PR4INV		__SFR__(0xBF800C2C)

/*
 * timer5 registers
 */
#define T5CON		__SFR__(0xBF800E00)
#define T5CONCLR	__SFR__(0xBF800E04)
#define T5CONSET	__SFR__(0xBF800E08)
#define T5CONINV	__SFR__(0xBF800E0C)
#define TMR5		__SFR__(0xBF800E10)
#define TMR5CLR		__SFR__(0xBF800E14)
#define TMR5SET		__SFR__(0xBF800E18)
#define TMR5INV		__SFR__(0xBF800E1C)
#define PR5		__SFR__(0xBF800E20)
#define PR5CLR		__SFR__(0xBF800E24)
#define PR5SET		__SFR__(0xBF800E28)
#define PR5INV		__SFR__(0xBF800E2C)

#endif
