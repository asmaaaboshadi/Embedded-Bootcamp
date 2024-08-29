/*
 * main.c
 *
 * Created: 8/28/2024 5:40:40 PM
 *  Author: somaa
 */ 

#define F_CPU 16000000
#include <util/delay.h>
#include "STD_Types.h"
#include "DIO_int.h"
#include "BitMath.h"
int main(void)
{
	DIO_voidSetPinDir(DIO_U8_PORTC,DIO_U8_PIN_0,DIO_U8_OUTPUT);
	DIO_voidSetPinDir(DIO_U8_PORTC,DIO_U8_PIN_1,DIO_U8_OUTPUT);
	DIO_voidSetPinDir(DIO_U8_PORTC,DIO_U8_PIN_2,DIO_U8_OUTPUT);
    DIO_voidSetPinDir(DIO_U8_PORTC,DIO_U8_PIN_3,DIO_U8_OUTPUT);
	DIO_voidSetPinDir(DIO_U8_PORTC,DIO_U8_PIN_4,DIO_U8_OUTPUT);
	DIO_voidSetPinDir(DIO_U8_PORTC,DIO_U8_PIN_5,DIO_U8_OUTPUT);
	DIO_voidSetPinDir(DIO_U8_PORTC,DIO_U8_PIN_6,DIO_U8_OUTPUT);
	DIO_voidSetPinDir(DIO_U8_PORTC,DIO_U8_PIN_7,DIO_U8_OUTPUT);
	while(1)
	{
		DIO_voidSetPinValue(DIO_U8_PORTC,DIO_U8_PIN_0,DIO_U8_HIGH);
		_delay_ms(50);
		DIO_voidSetPinValue(DIO_U8_PORTC,DIO_U8_PIN_1,DIO_U8_HIGH);
		_delay_ms(50);
		DIO_voidSetPinValue(DIO_U8_PORTC,DIO_U8_PIN_2,DIO_U8_HIGH);
		_delay_ms(50);
		DIO_voidSetPinValue(DIO_U8_PORTC,DIO_U8_PIN_3,DIO_U8_HIGH);
		_delay_ms(50);
		DIO_voidSetPinValue(DIO_U8_PORTC,DIO_U8_PIN_4,DIO_U8_HIGH);
		_delay_ms(50);
		DIO_voidSetPinValue(DIO_U8_PORTC,DIO_U8_PIN_5,DIO_U8_HIGH);
		_delay_ms(50);
		DIO_voidSetPinValue(DIO_U8_PORTC,DIO_U8_PIN_6,DIO_U8_HIGH);
		_delay_ms(50);
		DIO_voidSetPinValue(DIO_U8_PORTC,DIO_U8_PIN_7,DIO_U8_HIGH);
		_delay_ms(50);
		DIO_voidSetPinValue(DIO_U8_PORTC,DIO_U8_PIN_7,DIO_U8_LOW);
		_delay_ms(50);
		DIO_voidSetPinValue(DIO_U8_PORTC,DIO_U8_PIN_6,DIO_U8_LOW);
		_delay_ms(50);
		DIO_voidSetPinValue(DIO_U8_PORTC,DIO_U8_PIN_5,DIO_U8_LOW);
		_delay_ms(50);
		DIO_voidSetPinValue(DIO_U8_PORTC,DIO_U8_PIN_4,DIO_U8_LOW);
		_delay_ms(50);
		DIO_voidSetPinValue(DIO_U8_PORTC,DIO_U8_PIN_3,DIO_U8_LOW);
		_delay_ms(50);
		DIO_voidSetPinValue(DIO_U8_PORTC,DIO_U8_PIN_2,DIO_U8_LOW);
		_delay_ms(50);
		DIO_voidSetPinValue(DIO_U8_PORTC,DIO_U8_PIN_1,DIO_U8_LOW);
		_delay_ms(50);
		DIO_voidSetPinValue(DIO_U8_PORTC,DIO_U8_PIN_0,DIO_U8_LOW);
		_delay_ms(50);
	}
}