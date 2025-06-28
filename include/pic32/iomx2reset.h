/* $Id: iomx2reset.h,v 1.3 2016/05/29 20:19:44 clare Exp $ */
/*
 * special function registers
 */
#ifndef __PIC32MX2XX_RESET_H
#define __PIC32MX2XX_RESET_H

/*
 * reset control registers
 */
#define RCON		__SFR__(0xBF80F600)
#define RCONCLR		__SFR__(0xBF80F604)
#define RCONSET		__SFR__(0xBF80F608)
#define RCONINV		__SFR__(0xBF80F60C)
#define RSWRST		__SFR__(0xBF80F610)
#define RSWRSTCLR	__SFR__(0xBF80F614)
#define RSWRSTSET	__SFR__(0xBF80F618)
#define RSWRSTINV	__SFR__(0xBF80F61C)

#endif
