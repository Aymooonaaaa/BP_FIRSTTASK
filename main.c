/*
 * File:   main.c
 * Author: compu
 *
 * Created on 07 ??????, 2020, 01:17 ?
 */
#include <xc.h>

#include "config.h"
#include "SEVSEG.h"
#define _XTAL_FREQ 20000000 //define crystal frequency to 20MHz
// This array stores binary bit pattern that will be send to PORTD
unsigned char binary_pattern[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
unsigned int a,b,c,d;
unsigned int counter = 0;;
void main(void) 
{
    GPIO_SetPortDir(TIRSD , GPIO_PORT_OUTPUT );//define PORTD as a output pin
    GPIO_SetPortDir(GPIO_PORTD , GPIO_PORT_OUTPUT );  // initialize PORTD pins to active low
    GPIO_SetPortDir(TIRSB , GPIO_PORT_OUTPUT );    
    
    
    
    digit1 = 1;
    digit2 = 1; 
    digit3 = 1;
    digit4 = 1;
    
    
    
    
    while(1)
    {
        
           a = counter / 1000;   // holds 1000's digit
           b = ((counter/100)%10); // holds 100's digit
           c = ((counter/10)%10);  // holds 10th digit
           d = (counter%10);  // holds unit digit value
        
GPIO_PORTD =binary_pattern[a]; // send 1000's place data to fourth digit
digit1=0;   //  turn on forth display unit
__delay_ms(10);
digit1=1;   //  turn off forth display unit
GPIO_PORTD = binary_pattern[b];  // send 100's place data to 3rd digit
digit2=0;    //  turn on 3rd display unit
__delay_ms(10);
digit2=1;  //  turn off 3rd display unit
GPIO_PORTD = binary_pattern[c];  // send 10th place data to 2nd digit
digit3 = 0;  //  turn on 2nd display unit
__delay_ms(10);
 digit3 = 1;   //  turn off 2nd display unit
GPIO_PORTD =binary_pattern[d];  // send unit place data to 1st digit
digit4 = 0;  //  turn on 1st display unit
__delay_ms(10);
digit4 = 1;  //  turn off 1st display unit

if(counter>=1000) //wait till flag reaches 100
{
    counter=0; //only if flag is hundred "i" will be incremented 
}
counter++; //increment flag for each flas
    }
    return ;
}

