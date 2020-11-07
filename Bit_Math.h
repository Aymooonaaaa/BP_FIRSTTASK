/* 
 * File:   Bit_Math.h
 * Author: compu
 *
 * Created on 07 ??????, 2020, 01:06 ?
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_



#define PIN_SET(port, pin) port->LATSET = (1UL << pin) //set pins on port
#define PIN_CLR(port, pin) port->LATCLR = (1UL << pin) //clear pins on port
#define PIN_FLP(port, pin) port->LATINV = (1UL << pin) //flip pins on port

#endif /* BIT_MATH_H_ */
