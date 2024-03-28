/*
 * main.c
 *
 *  Created on: Mar 28, 2024
 *      Author: gayatri
 */


#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"

#include "led2.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif


int main(void)
{
	SystemInit();
	LedInit(LED_GREEN);
	while(1) {
		LedBlink(LED_GREEN, 500);
		DelayMs(500);
	}
	return 0;
}
