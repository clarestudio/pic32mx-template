/* $Id: main.c,v 1.13 2025/06/28 18:55:53 clare Exp $ */

#include <stdint.h>
#include <pic32/io.h>

#define LED_MASK 0x00000001  /* RA0 */

static void delay_1s(void)
{
    /* 
     * Approximate 1 second delay at 8 MHz.
     * Each loop takes ~5 cycles; calibrate empirically if needed.
     */
    volatile uint32_t count = 1600000;
    while (count--) {
        __asm__ volatile ("nop");
    }
}

int main(void)
{
    /* Configure RA0 as output */
    TRISACLR = LED_MASK;
    LATA = 0;

    while (1) {
        LATAINV = LED_MASK;
        delay_1s();
    }

    return 0;
}
