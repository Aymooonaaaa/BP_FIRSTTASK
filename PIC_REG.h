/* 
 * File:   PIC_REG.h
 * Author: compu
 *
 * Created on 07 ??????, 2020, 01:11 ?
 */
#include <xc.h>

#ifndef PIC_REG_H
#define	PIC_REG_H


#define PORTA (*(volatile uint8*)(005h))
#define PORTB (*(volatile uint8*)(006h))
#define PORTC (*(volatile uint8*)(007h))
#define PORTD (*(volatile uint8*)(008h))
#define PORTE (*(volatile uint8*)(009h))

#define TIRSA (*(volatile uint8*)(085h))
#define TIRSB (*(volatile uint8*)(086h))
#define TIRSC (*(volatile uint8*)(087h))
#define TIRSD (*(volatile uint8*)(088h))
#define TIRSE (*(volatile uint8*)(089h))



#endif	/* PIC_REG_H */

