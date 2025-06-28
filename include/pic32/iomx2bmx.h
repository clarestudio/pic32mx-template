/* $Id: iomx2bmx.h,v 1.2 2016/05/29 20:19:44 clare Exp $ */
/*
 * special function registers
 */
#ifndef __PIC32MX2XX_BMX_H
#define __PIC32MX2XX_BMX_H

/*
 * bus matrix registers
 */
#define BMXCON		__SFR__(0xBF882000)
#define BMXDKPBA	__SFR__(0xBF882010)
#define BMXDUDBA	__SFR__(0xBF882020)
#define BMXDUPBA	__SFR__(0xBF882030)
#define BMXDRMSZ	__SFR__(0xBF882040)
#define BMXPUPBA	__SFR__(0xBF882050)
#define BMXPFMSZ	__SFR__(0xBF882060)
#define BMXBOOTSZ	__SFR__(0xBF882070)

#endif
