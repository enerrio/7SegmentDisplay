/* 
 * File:   Example.c
 * Author: Aaron Marquez
 *
 * Created on January 27, 2017, 2:39 PM
 * 
 * Architecture: Baseline PIC
 * Processor: 18F45K20
 * Compiler: MPLAB XC8 v1.37
 * 
 * Purpose: To get a 7-segment Common Cathode display working with custom header file
 * 
 * Version 1: Get it to light up any digit via constants. i.e. it's hardcoded. Done.
 * Version 2: Experiment with header files. Write functions to display certain digits. Done.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <xc.h>
#include <p18f45k20.h>
#include "7segment.h"

#pragma config FCMEN = OFF
#pragma config BORV = 3
#pragma config CPB = OFF
#pragma config CPD = OFF

#pragma config FOSC = INTIO67
#pragma config  LVP = OFF
#pragma config  PWRT = ON
#pragma config BOREN = SBORDIS
#pragma config WDTEN = OFF
#pragma config LPT1OSC = OFF
#pragma config PBADEN = ON
#pragma config STVREN = ON

#define _XTAL_FREQ  4000000         // 4MHz


/******   Initialization  ******/
void init() {
    
    TRISD = 0;
    TRISC = 0;
    PORTC = 0;
}

/******   Delay  ******/
void delay()
{
    for (int i = 0; i < 20; i++) {
        __delay_ms(10);
    }
}

/******   Main Program ******/
int main() {
    
    // Initialize ports
    init();
    
    // Set 7-Segment bits here
    // Common Cathode: A -> RC0, B -> RC1, C -> RC2, D -> RC3, E -> RC4, F -> RC5
    // G -> RC6, DP (Decimal Point) -> RC7
    
    // Short delay before display starts counting
    delay();
    delay();
    delay();
    delay();
    
    for (;;) {
        
        count();
        delay();
    }
    

    return (EXIT_SUCCESS);
}

