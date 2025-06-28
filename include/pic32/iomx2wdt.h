/* $Id: iomx2wdt.h,v 1.2 2016/05/29 20:19:44 clare Exp $ */
/*
 * special function registers
 */
#ifndef __PIC32MX2XX_WDT_H
#define __PIC32MX2XX_WDT_H

/*
 * watch dog timer registers
 */
#define WDTCON		__SFR__(0xBF800000)
#define WDTCONCLR	__SFR__(0xBF800004)
#define WDTCONSET	__SFR__(0xBF800008)
#define WDTCONINV	__SFR__(0xBF80000C)

#endif
