/*
 * LibrarySensor.c
 *
 *  Created on: Nov 26, 2018
 *      Author: alejandro
 */
#include "LibrarySensor.h"
#include "stm32f0xx_hal.h"


float get_flow(int contador);


float get_flow(int contador){
	float flow;
	float frec;
	frec = (contador/30);
	flow = frec*8.087 - 9.38;
	return flow;
}




