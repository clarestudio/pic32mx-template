/* $Id: iosfr.h,v 1.3 2016/05/29 20:19:44 clare Exp $ */
/*
 * special function registers
 */
#ifndef __PIC32_IOSFR_H
#define __PIC32_IOSFR_H

#ifdef __ASSEMBLER__
#define __SFR__(addr)	addr
#else
#define __SFR__(addr)	(*((volatile unsigned int *)(addr)))
#endif

#endif
