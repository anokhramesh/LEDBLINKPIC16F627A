/*
 * File:   PIC16F627Amain.c
 * Author: user
 *
 * Created on June 18, 2022, 2:26 PM
 */
#include <xc.h>
__CONFIG(FOSC_INTOSCCLK & WDTE_OFF & PWRTE_ON & MCLRE_ON & BOREN_ON & LVP_OFF & CPD_OFF & CP_OFF);
#define LED RB3
#define _XTAL_FREQ 4000000

void main(void) {
    TRISB3 = 0;
    while(1){
        LED = 1;
        __delay_ms(1000);
        LED = 0;
        __delay_ms(1000);
    }
     
    
    return;
}
