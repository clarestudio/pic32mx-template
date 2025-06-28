/* $Id: iomx2pps.h,v 1.2 2016/05/29 20:19:44 clare Exp $ */
/*
 * special function registers
 */
#ifndef __PIC32MX2XX_PPS_H
#define __PIC32MX2XX_PPS_H

/*
 * peripheral pin select registers
 */
#define INT1R		__SFR__(0xBF80FA04)
#define INT2R		__SFR__(0xBF80FA08)
#define INT3R		__SFR__(0xBF80FA0C)
#define INT4R		__SFR__(0xBF80FA10)
#define T2CKR		__SFR__(0xBF80FA18)
#define T3CKR		__SFR__(0xBF80FA1C)
#define T4CKR		__SFR__(0xBF80FA20)
#define T5CKR		__SFR__(0xBF80FA24)
#define IC1R		__SFR__(0xBF80FA28)
#define IC2R		__SFR__(0xBF80FA2C)
#define IC3R		__SFR__(0xBF80FA30)
#define IC4R		__SFR__(0xBF80FA34)
#define IC5R		__SFR__(0xBF80FA38)
#define OCFAR		__SFR__(0xBF80FA48)
#define OCFBR		__SFR__(0xBF80FA4C)
#define U1RXR		__SFR__(0xBF80FA50)
#define U1CTSR		__SFR__(0xBF80FA54)
#define U2RXR		__SFR__(0xBF80FA58)
#define U2CTSR		__SFR__(0xBF80FA5C)
#define SDI1R		__SFR__(0xBF80FA84)
#define SS1R		__SFR__(0xBF80FA88)
#define SDI2R		__SFR__(0xBF80FA90)
#define SS2R		__SFR__(0xBF80FA94)
#define REFCLKIR	__SFR__(0xBF80FAB8)

#define RPA0R		__SFR__(0xBF80FB00)
#define RPA1R		__SFR__(0xBF80FB04)
#define RPA2R		__SFR__(0xBF80FB08)
#define RPA3R		__SFR__(0xBF80FB0C)
#define RPA4R		__SFR__(0xBF80FB10)
#define RPA8R		__SFR__(0xBF80FB20)
#define RPA9R		__SFR__(0xBF80FB24)

#define RPB0R		__SFR__(0xBF80FB2C)
#define RPB1R		__SFR__(0xBF80FB30)
#define RPB2R		__SFR__(0xBF80FB34)
#define RPB3R		__SFR__(0xBF80FB38)
#define RPB4R		__SFR__(0xBF80FB3C)
#define RPB5R		__SFR__(0xBF80FB40)
#define RPB6R		__SFR__(0xBF80FB44)
#define RPB7R		__SFR__(0xBF80FB48)
#define RPB8R		__SFR__(0xBF80FB4C)
#define RPB9R		__SFR__(0xBF80FB50)
#define RPB10R		__SFR__(0xBF80FB54)
#define RPB11R		__SFR__(0xBF80FB58)
#define RPB13R		__SFR__(0xBF80FB60)
#define RPB14R		__SFR__(0xBF80FB64)
#define RPB15R		__SFR__(0xBF80FB68)

#define RPC0R		__SFR__(0xBF80FB6C)
#define RPC1R		__SFR__(0xBF80FB70)
#define RPC2R		__SFR__(0xBF80FB74)
#define RPC3R		__SFR__(0xBF80FB78)
#define RPC4R		__SFR__(0xBF80FB7C)
#define RPC5R		__SFR__(0xBF80FB80)
#define RPC6R		__SFR__(0xBF80FB84)
#define RPC7R		__SFR__(0xBF80FB88)
#define RPC8R		__SFR__(0xBF80FB8C)
#define RPC9R		__SFR__(0xBF80FB90)

#endif
