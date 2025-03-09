/*
 * MTIMER_interface.h
 *
 *  Created on: Aug 10, 2023
 *      Author: Mahmoud
 */

#ifndef MTIMER_INTERFACE_H_
#define MTIMER_INTERFACE_H_

/*Timer0*/
void MTIMER0_voidInit(void);
void MTIMER0_voidDisable(void);
void MTIMER0_voidSetPreload(u8 Copy_u8Preload);
void MTIMER0_voidSetDutyCycle(u8 Copy_u8DutyCycle);

/*Timer1 with Post-Build*/
void MTIMER1_voidInit(Timer1Modes_t Copy_Timer1Mode, TOP_t Copy_Timer1TopMode, Prescaler_t Copy_enuPrescalerValue);
void MTIMER1_voidSetTopValue(u16 Copy_u16DutyCycle, TOP_t Copy_Timer1TopMode);
void MTIMER1_voidSetDutyCycle(u16 Copy_u16DutyCycleValue);

#endif /* MTIMER_INTERFACE_H_ */
