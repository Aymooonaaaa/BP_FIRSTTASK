/* 
 * File:   GPIO.h
 * Author: compu
 *
 * Created on 07 ??????, 2020, 01:09 ?
 */

#ifndef GPIO_H
#define	GPIO_H

#include "PIC_REG.h"
#include "STD.h"
#include "Bit_Math.h"

#define  GPIO_PORTA      0
#define  GPIO_PORTB      1
#define  GPIO_PORTC      2
#define  GPIO_PORTD      3
#define  GPIO_PORTE      4



#define  GPIO_PIN0       0
#define  GPIO_PIN1       1
#define  GPIO_PIN2       2
#define  GPIO_PIN3       3
#define  GPIO_PIN4       4
#define  GPIO_PIN5       5
#define  GPIO_PIN6       6
#define  GPIO_PIN7       7



#define GPIO_PIN_HIGH            1
#define GPIO_PIN_LOW             0
#define GPIO_PIN_PULL_UP         1

#define GPIO_PORT_HIGH           0xFF
#define GPIO_PORT_LOW            0x00
#define GPIO_PORT_PULL_UP        0xFF


#define GPIO_PIN_OUTPUT          0
#define GPIO_PIN_INPUT           1

#define GPIO_PORT_OUTPUT         0xFF
#define GPIO_PORT_INPUT          0






void GPIO_SetPortDir(uint8 Port , uint8 Dir);
void GPIO_SetPinDir(uint8 Port ,uint8 Pin , uint8 Dir);

void GPIO_WritePort(uint8 Port , uint8 Val);
void GPIO_WritePin(uint8 Port ,uint8 Pin, uint8 Val);

void GPIO_ReadPort(uint8 Port , uint8* Val);
void GPIO_ReadPin (uint8 Port ,uint8 Pin, uint8* Val);


void GPIO_TogglePin(uint8 port , uint8 pin);








#endif	/* GPIO_H */

