/* $Id: iomx2nvm.h,v 1.2 2016/05/29 20:19:44 clare Exp $ */
/*
 * special function registers
 */
#ifndef __PIC32MX2XX_NVM_H
#define __PIC32MX2XX_NVM_H

/*
 * non-volatile memory registers
 */
#define NVMCON		__SFR__(0xBF80F400)
#define NVMCONCLR	__SFR__(0xBF80F404)
#define NVMCONSET	__SFR__(0xBF80F408)
#define NVMCONINV	__SFR__(0xBF80F40C)
#define NVMKEY		__SFR__(0xBF80F410)
#define NVMADDR		__SFR__(0xBF80F420)
#define NVMDATA		__SFR__(0xBF80F430)
#define NVMSRCADDR	__SFR__(0xBF80F440)

#endif
