/*
 * main.c
 *
 *  Created on: Aug 1, 2023
 *      Author: Mahmoud
 *      Layer: Application
 *      Version: 1.00
 */

#define __OPTIMIZE__
#include <util/delay.h>
#include "STD_TYPES.h"
#include "MACROS.h"
#include "MCAL/DIO/MDIO_interface.h"
#include "MCAL/ADC/M_ADC_interface.h"
#include "MCAL/Timer/MTimer_config.h"
#include "MCAL/Timer/MTimer_interface.h"
#include "MCAL/ADC/M_ADC_config.h"
#include "HAL/LCD/HLCD_interface.h"

u16 MAP_u16Mapping(u16 x_Max, u16 x_Min, u16 y_Max, u16 y_Min, u16 y);
u16 MADC_u16Reading;
u16 ADC_u16Mapped;
u16 Reading_u16Mapped;

int main()
{
	Port_VoidInit();
	MADC_voidInit();
	HLCD_voidinit();
	MTIMER1_voidInit(FAST_PWM_NON_INVERTING, TOP_FPWM_ICR1, DIV_8);					/*Initialize Timer1*/
	MTIMER1_voidSetTopValue(20000, TOP_FPWM_ICR1);

	while(1)
	{
		//reading from LDR to control Servo
		MADC_u16Reading = MADC_u16GetValue(ADC_CHANNEL0);
		ADC_u16Mapped = MAP_u16Mapping(2550, 450,1023, 0, MADC_u16Reading);
		Reading_u16Mapped = MAP_u16Mapping(180, 0,2550, 450, ADC_u16Mapped);
		if(Reading_u16Mapped > 100)
		{
			HLCD_voidgotoXY(0, 0);
			HLCD_voidsendString("Angle:");
			HLCD_voidgotoXY(0, 7);
			HLCD_voidsendNumber(Reading_u16Mapped);
		}
		else
		{
			HLCD_voidgotoXY(0, 0);
			HLCD_voidsendString("Angle:");
			HLCD_voidgotoXY(0, 7);
			HLCD_voidsendNumber(Reading_u16Mapped);
			HLCD_voidsendData(' ');
		}
		MTIMER1_voidSetDutyCycle(ADC_u16Mapped);
		_delay_ms(150);
	}
}

u16 MAP_u16Mapping(u16 x_Max, u16 x_Min, u16 y_Max, u16 y_Min, u16 y)
{
	u16 x;
	x = (((u32)(x_Max - x_Min) * (y - y_Min)) / (y_Max - y_Min)) + x_Min;
	return x;
}
