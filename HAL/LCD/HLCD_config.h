/*
 * HLCD_config.h
 *
 *  Created on: Aug 3, 2023
 *      Author: Mahmoud
 *      Layer: HAL
 *      Module: LCD
 *      Version: 1.00
 */

#ifndef HAL_LCD_HLCD_CONFIG_H_
#define HAL_LCD_HLCD_CONFIG_H_

#define LCD_PORT_DATA		DIO_PORTA
#define LCD_PORT_Control	DIO_PORTD

#define	LCD_RS				0		//Register select pin
#define	LCD_RW				1		//Read/Write pin
#define LCD_EN				2		//Enable select pin

#define LCD_MODE			4		//LCD Mode: 4,8 bit

#endif /* HAL_LCD_HLCD_CONFIG_H_ */
