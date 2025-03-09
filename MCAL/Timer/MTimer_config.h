/*
 * MTimer_config.h
 *
 *  Created on: Aug 10, 2023
 *      Author: Mahmoud
 */

#ifndef MTIMER_CONFIG_H_
#define MTIMER_CONFIG_H_

#define PRELOAD_VALUE 			0
#define	COMPARE_MATCH_VALUE		0
/*
 * select mode timer0:
 * 						TIMER0_CTC
 * 						TIMER0_NORMAL
 * 						FAST_PWM
 * */
#define TIMER0_MODE 	FAST_PWM

/*Timer1 with Post-Build*/
typedef enum
{
	NORMAL_MODE,
	CTC_TOGGLE,
	CTC_SET,
	CTC_CLEAR,
	FAST_PWM_NON_INVERTING,
	FAST_PWM_INVERTING
}Timer1Modes_t;

typedef enum
{
	TOP_CTC_OCR1A,
	TOP_CTC_ICR1,
	TOP_FPWM_ICR1,
	TOP_FPWM_OCR1A
}TOP_t;
//complete the enum from Table 47. Waveform Generation Mode Bit Description page 109

typedef enum
{
	DIV_8,
	DIV_64,
	DIV_256
}Prescaler_t;
#endif /* MTIMER_CONFIG_H_ */
