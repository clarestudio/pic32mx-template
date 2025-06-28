/* $Id: iomx2osc.h,v 1.2 2016/05/29 20:19:44 clare Exp $ */
/*
 * special function registers
 */
#ifndef __PIC32MX2XX_OSC_H
#define __PIC32MX2XX_OSC_H

/*
 * oscillator registers
 */
#define OSCCON		__SFR__(0xBF80F000)
#define OSCCONCLR	__SFR__(0xBF80F004)
#define OSCCONSET	__SFR__(0xBF80F008)
#define OSCCONINV	__SFR__(0xBF80F00C)
#define OSCTUN		__SFR__(0xBF80F010)
#define OSCTUNCLR	__SFR__(0xBF80F014)
#define OSCTUNSET	__SFR__(0xBF80F018)
#define OSCTUNINV	__SFR__(0xBF80F01C)
#define REFOCON		__SFR__(0xBF80F020)
#define REFOCONCLR	__SFR__(0xBF80F024)
#define REFOCONSET	__SFR__(0xBF80F028)
#define REFOCONINV	__SFR__(0xBF80F02C)
#define REFOTRIM	__SFR__(0xBF80F030)
#define REFOTRIMCLR	__SFR__(0xBF80F034)
#define REFOTRIMSET	__SFR__(0xBF80F038)
#define REFOTRIMINV	__SFR__(0xBF80F03C)

#endif
