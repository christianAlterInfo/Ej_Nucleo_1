#include "FuncionesSCCB.h"

#define PWDN GPIO_PIN_0
#define RESETB GPIO_PIN_3
#define success   1
#define unsuccess 0

eReset Reset = Hardware;

void OV_PWUP( void )
{
	digitalWrite( PWDN, HIGH );
	delay_us( 1500 );
	
	digitalWrite( PWDN, LOW );
	delay_us( 1500 );
}

uint8_t OV_WRITE( uint16_t Data )
{
	uint8_t j, state;
	
	for( j = 0; j < 16; j++ )
	{
		if( ( Data << j ) && ( 0x8000 ) )
		{
			digitalWrite( SIO_D, HIGH );
			delay_us( 50 );
		}
		else
		{
			digitalWrite( SIO_D, LOW );
			delay_us( 50 );
		}
		delay_us( 50 );
		digitalWrite( SIO_C, HIGH );
		delay_us( 50 );
		digitalWrite( SIO_C, LOW );
		delay_us( 5 );
	}
	
	delay_us( 50 );
	pinMode( SIO_D , INPUT );
	delay_us( 10 );
	digitalWrite( SIO_C, HIGH );
	delay_us( 80 );
	if( digitalRead( SIO_D ) )
	{
		state = unsuccess;
	}
	else
	{
		state = success;
	}
	digitalWrite( SIO_C, LOW );
	delay_us( 50 );
	
	pinMode( SIO_D , OUTPUT );
	return state;
}

uint8_t OV_READ( void )
{
	unsigned char j;
	uint8_t read;
	
	pinMode( SIO_C, INPUT );
	delay_us( 50 );
	for( j = 8; j > 0; j-- )
	{
		digitalWrite( SIO_C, HIGH );
		delay_us( 50 );
		read <<= 1;
		
		if( SIO_D )
		{
			read |= 1;
		}
		digitalWrite( SIO_C, LOW );
		delay_us( 50 );
	}
	
	pinMode( SIO_D, OUTPUT );
	
	return read;
}

uint8_t OV_WREGISTER( uint16_t rID, uint8_t rDAT )
{
	OV_SDT();
	if( !( OV_WRITE( 0x4200 ) ) )
	{
		OV_SPDT();
		return 0;
	}
	delay_us( 20 );
	
	if( !( OV_WRITE( rID ) ) )
	{
		OV_SPDT();
		return 0;
	}
	delay_us( 20 );
	
	if( !( OV_WRITE( rDAT ) ) )
	{
		OV_SPDT();
		return 0;
	}
	OV_SPDT();
	
	return 1;
}

uint8_t OV_RREGISTER( uint8_t rID, uint8_t *rDAT )
{
	OV_SDT();
	if( !( OV_WRITE( 0x4200 ) ) )
	{
		OV_SPDT();
		return 0;
	}
	delay_us( 20 );
	
	if( !( OV_WRITE( rID ) ) )
	{
		OV_SPDT();
		return 0;
	}
	delay_us( 20 );
	
	OV_SDT();
	
	if( !( OV_WRITE( 0x4300 ) ) )
	{
		OV_SPDT();
		return 0;
	}
	delay_us( 20 );
	*rDAT = OV_READ();
	OV_SPDT();
	
	return 1;
}

//True is 1
//False is 0
uint8_t OV_RESET( eReset Mode_Reset )
{
	switch( Mode_Reset )
	{
		case Hardware:
			digitalWrite( RESETB, LOW );
			delay_us( 50 );
			return 1;
		case Software:
			if( !( OV_WREGISTER( 0x3008, 0x80 ) ) )
			{
				OV_SPDT();
				return 0;
			}
			delay_us( 25 );
			return 1;
		default:
			return 0;
	}
}

