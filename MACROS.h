/*
 * MACROS.h
 *
 *  Created on: Aug 1, 2023
 *      Author: Mahmoud
 */

#ifndef MACROS_H_
#define MACROS_H_

#define SET_BIT(reg, bit_number) 	reg |= (1 << bit_number)

#define CLR_BIT(reg, bit_number) 	reg &= ~(1 << bit_number)

#define TOGGLE_BIT(reg, bit_number)	reg ^= (1 << bit_number)

#define GET_BIT(reg, bit_number)  	((reg >> bit_number) & 1)

#endif /* MACROS_H_ */
