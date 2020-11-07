/*
 * File:   GPIO.c
 * Author: compu
 *
 * Created on 07 ??????, 2020, 01:08 ?
 */


#include <xc.h>

#include "GPIO.h"
#include "PIC_REG.h"
#include "Bit_Math.h"
#include "STD.h"



void GPIO_SetPortDir (uint8 Port , uint8 Dir)
{


	switch(Port)
	{

		case GPIO_PORTA :

		TIRSA = Dir;

		break ;

		case GPIO_PORTB :
                
          TIRSB = Dir;

		break;

		case GPIO_PORTC :

		TIRSC = Dir;

		break;

		case GPIO_PORTD :

		TIRSD = Dir;

		break;

		case GPIO_PORTE :

		TIRSE = Dir;

		break;

		default:
		break;
	}

}


void GPIO_SetPinDir(uint8 Port ,uint8 Pin , uint8 Dir)


{
          switch (Dir)
	  {


		case GPIO_PIN_OUTPUT :


		switch (Port)
		{
			case GPIO_PORTA :

			PIN_SET(TISRA,Pin);

			break;

			case GPIO_PORTB :

			PIN_SET(TISRB,Pin);

			break;

			case GPIO_PORTC :

			PIN_SET(TISRC,Pin);

			break;

			case GPIO_PORTD :

			PIN_SET(TISRD,Pin);

			break;

			case GPIO_PORTE :

			PIN_SET(TISRE,Pin);

			break;

			default:
			break;
		}

		break;

		case GPIO_PIN_INPUT :


		switch (Port)
		{
			case GPIO_PORTA :

			PIN_CLR(TISRA,Pin);

			break;

			case GPIO_PORTB :

			PIN_CLR(TISRB,Pin);

			break;

			case GPIO_PORTC :

			PIN_CLR(TISRC,Pin);

			break;

			case GPIO_PORTD :

			PIN_CLR(TISRD,Pin);

			break;

			default:
			break;
		}

		break;


		default :
		break;
	}



}







void GPIO_WritePort(uint8 Port , uint8 Val)
{


	switch (Port)
	{
		case GPIO_PORTA :

		PORTA = Val;

		break;

		case GPIO_PORTB :

		PORTB = Val;

		break;

		case GPIO_PORTC :

		PORTC = Val;

		break;

		case GPIO_PORTD :

		PORTD = Val;
              
        case GPIO_PORTE :

		PORTE = Val;

		break;

		default:
		break;
	}


}

void GPIO_WritePin(uint8 Port ,uint8 Pin, uint8 Val)
{

switch (Val)
	{


		case GPIO_PIN_HIGH :


		switch (Port)
		{
			case GPIO_PORTA :

			PIN_SET(PORTA,Pin);

			break;

			case GPIO_PORTB :

			PIN_SET(PORTB,Pin);

			break;

			case GPIO_PORTC :

			PIN_SET(PORTC,Pin);

			break;

			case GPIO_PORTD :

			PIN_SET(PORTD,Pin);

			break;
                 
            case GPIO_PORTE :

			PIN_SET(PORTE,Pin);

			break;

			default:
			break;
		}

		break;

		case GPIO_PIN_LOW :


		switch (Port)
		{
			case GPIO_PORTA :

			PIN_CLR(PORTA,Pin);

			break;

			case GPIO_PORTB :

			PIN_CLR(PORTB,Pin);

			break;

			case GPIO_PORTC :

			PIN_CLR(PORTC,Pin);

			break;

			case GPIO_PORTD :

			PIN_CLR(PORTD,Pin);

			break;

			case GPIO_PORTE :

			PIN_CLR(PORTE,Pin);

			break;

			default:
			break;
		}

		break;


		default :
		break;
	}


}

