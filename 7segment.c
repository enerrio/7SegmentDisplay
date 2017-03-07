/*
 * File: 7segment.h
 * Dependencies: 7segment.h
 * Created 1/29/17 3:15 PM
 * Author: Aaron Marquez
 * This file is written to work with a 7-Segment Common Cathode Display
 *
 */
 
#include "7segment.h"
#include <xc.h>

#define _XTAL_FREQ 4000000


/* ***** Wiring 7 Segment ***** */
/*
 * A -> RC0
 * B -> RC1
 * C -> RC2
 * D -> RC3
 * E -> RC4
 * F -> RC5
 * G -> RC6
 * DP (Decimal Point) -> RC7
 * Common Cathode -> Ground
 *
 */
    
void cleardisp()
{
    PORTC = 0;
}

void displayzero()
{
    LATCbits.LATC0 = 1;
    LATCbits.LATC1 = 1;
    LATCbits.LATC5 = 1;
    LATCbits.LATC2 = 1;
    LATCbits.LATC3 = 1;
    LATCbits.LATC4 = 1;
}
    
void displayone()
{
	LATCbits.LATC1 = 1;
    LATCbits.LATC2 = 1;
}

void displaytwo()
{
    LATCbits.LATC0 = 1;
    LATCbits.LATC1 = 1;
    LATCbits.LATC6 = 1;
    LATCbits.LATC4 = 1;
    LATCbits.LATC3 = 1;
}

void displaythree()
{
    LATCbits.LATC0 = 1;
    LATCbits.LATC1 = 1;
    LATCbits.LATC6 = 1;
    LATCbits.LATC2 = 1;
    LATCbits.LATC3 = 1;
}

void displayfour()
{
    LATCbits.LATC5 = 1;
    LATCbits.LATC6 = 1;
    LATCbits.LATC1 = 1;
    LATCbits.LATC2 = 1;
}

void displayfive()
{
    LATCbits.LATC0 = 1;
    LATCbits.LATC5 = 1;
    LATCbits.LATC6 = 1;
    LATCbits.LATC2 = 1;
    LATCbits.LATC3 = 1;
}

void displaysix()
{
    LATCbits.LATC5 = 1;
    LATCbits.LATC6 = 1;
    LATCbits.LATC2 = 1;
    LATCbits.LATC3 = 1;
    LATCbits.LATC4 = 1;
}

void displayseven()
{
    LATCbits.LATC0 = 1;
    LATCbits.LATC1 = 1;
    LATCbits.LATC2 = 1;
}

void displayeight()
{
    LATCbits.LATC0 = 1;
    LATCbits.LATC1 = 1;
    LATCbits.LATC5 = 1;
    LATCbits.LATC2 = 1;
    LATCbits.LATC3 = 1;
    LATCbits.LATC4 = 1;
    LATCbits.LATC6 = 1;
}

void displaynine()
{
    LATCbits.LATC0 = 1;
    LATCbits.LATC1 = 1;
    LATCbits.LATC5 = 1;
    LATCbits.LATC2 = 1;
    LATCbits.LATC6 = 1;
}

void displaydp()
{
    LATCbits.LATC7 = 1;
}

void count()
{
    displayzero();
    for (int i = 0; i < 20; i++) {
        __delay_ms(10);
    }
    cleardisp();
    
    displayone();
    for (int i = 0; i < 20; i++) {
        __delay_ms(10);
    }
    cleardisp();
    
    displaytwo();
    for (int i = 0; i < 20; i++) {
        __delay_ms(10);
    }
    cleardisp();
    
    displaythree();
    for (int i = 0; i < 20; i++) {
        __delay_ms(10);
    }
    cleardisp();
    
    displayfour();
    for (int i = 0; i < 20; i++) {
        __delay_ms(10);
    }
    cleardisp();
    
    displayfive();
    for (int i = 0; i < 20; i++) {
        __delay_ms(10);
    }
    cleardisp();
    
    displaysix();
    for (int i = 0; i < 20; i++) {
        __delay_ms(10);
    }
    cleardisp();
    
    displayseven();
    for (int i = 0; i < 20; i++) {
        __delay_ms(10);
    }
    cleardisp();
    
    displayeight();
    for (int i = 0; i < 20; i++) {
        __delay_ms(10);
    }
    cleardisp();
    
    displaynine();
    for (int i = 0; i < 20; i++) {
        __delay_ms(10);
    }
    cleardisp();
}
