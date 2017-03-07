/*
 * File: 7segment.h
 * Source: 7segment.c
 * Author: Aaron Marquez
 * This file is written to work with a 7-Segment Common Cathode Display
 *
 */
  
#ifndef _7SEGMENT_H_
#define _7SEGMENT_H_


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


void cleardisp();
void displayzero();
void displayone();
void displaytwo();
void displaythree();
void displayfour();
void displayfive();
void displaysix();
void displayseven();
void displayeight();
void displaynine();
void displaydp();
void count();


#endif
