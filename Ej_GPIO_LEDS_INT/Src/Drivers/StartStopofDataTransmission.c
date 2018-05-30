#include "StartStopofDataTransmission.h"

void pinMode( uint16_t pin , uint8_t mode )
{
	GPIO_InitTypeDef  gpio_init_structure;

	gpio_init_structure.Pin       = pin;
	gpio_init_structure.Mode      = (mode == INPUT) ? GPIO_MODE_INPUT : GPIO_MODE_OUTPUT_OD;
	gpio_init_structure.Pull      = GPIO_PULLUP;
	gpio_init_structure.Speed     = GPIO_SPEED_HIGH;
	HAL_GPIO_Init( GPIO_PORT , &gpio_init_structure );
}

void digitalWrite( uint16_t pin, uint8_t estado )
{
	HAL_GPIO_WritePin( GPIO_PORT,pin,( estado == LOW ) ? GPIO_PIN_RESET : GPIO_PIN_SET );
}

uint8_t digitalRead( uint16_t pin )
{
	return ( HAL_GPIO_ReadPin( GPIO_PORT , pin ) == GPIO_PIN_RESET ) ? LOW : HIGH;
}

void OV_SDT( void )
{
	digitalWrite( SIO_D, HIGH );
	delay_us( 50 );
	
	digitalWrite( SIO_C, HIGH );
	delay_us( 50 );
	
	digitalWrite( SIO_D, LOW );
	delay_us( 50 );
	
	digitalWrite( SIO_C, LOW );
	delay_us( 50 );
}

void OV_SPDT( void )
{
	digitalWrite( SIO_D, LOW );
	delay_us( 50 );
	
	digitalWrite( SIO_C, HIGH );
	delay_us( 50 );
	
	digitalWrite( SIO_D, HIGH );
	delay_us( 50 );
}
