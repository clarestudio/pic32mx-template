/* $Id: io.h,v 1.5 2017/01/11 13:36:07 clare Exp $ */
#ifndef __PIC32_IO_H
#define __PIC32_IO_H

#include <pic32/iosfr.h>

#if defined(__PIC32MX210__)
#include <pic32/iomx2xx.h>
#elif defined(__PIC32MX220__)
#include <pic32/iomx2xx.h>
#elif defined(__PIC32MX230__)
#include <pic32/iomx2xx.h>
#elif defined(__PIC32MX250__)
#include <pic32/iomx2xx.h>
#elif defined(__PIC32MX270__)
#include <pic32/iomx2xx.h>
#else
#error	Undefined part
#endif

#endif
