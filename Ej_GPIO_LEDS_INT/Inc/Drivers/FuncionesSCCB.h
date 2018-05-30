
#ifndef _FuncionesSCCB_H_
#define _FuncionesSCCB_H_

#include <stdint.h>
#include "stm32f7xx_hal.h"

#define GPIO_PORT GPIOB
#define SIO_C GPIO_PIN_8 
#define SIO_D GPIO_PIN_9
#define PWDN GPIO_PIN_0
#define RESETB GPIO_PIN_3

#define success   1
#define unsuccess 0

typedef enum
{
	Hardware = 0,
	Software,
} eReset;

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

extern void pinMode( uint16_t pin, uint8_t mode );

extern void digitalWrite( uint16_t pin, uint8_t estado );

extern uint8_t digitalRead( uint16_t pin );

extern uint32_t micros( void );

extern void delay_us( uint32_t );

extern void OV_SDT( void );

extern void OV_SPDT( void );

void OV_PWUP( void );

uint8_t OV_WRITE( uint16_t Data );

uint8_t OV_READ( void );

uint8_t OV_WREGISTER( uint16_t rID, uint8_t rDAT );

uint8_t OV_RREGISTER( uint8_t rID, uint8_t *rDAT );

uint8_t OV_RESET( eReset Mode_Reset );

#endif /* _FuncionesSCCB_H_ */
