
#ifndef _StartStopofDataTransmission_H_
#define _StartStopofDataTransmission_H_

#include <stdint.h>
#include "stm32f7xx_hal.h"

#define GPIO_PORT GPIOB
#define SIO_C GPIO_PIN_8 
#define SIO_D GPIO_PIN_9

typedef enum
{
	INPUT = 0,
	OUTPUT,
} eMode;

typedef enum
{
	LOW = 0,
	HIGH,
} eState;

extern uint16_t pin;

void pinMode( uint16_t pin, uint8_t mode );

void digitalWrite( uint16_t pin, uint8_t estado );

uint8_t digitalRead( uint16_t pin );

extern uint32_t micros( void );

extern void delay_us( uint32_t us );

void OV_SDT( void );

void OV_SPDT( void );

#endif /* _StartStopofDataTransmission_H_ */
