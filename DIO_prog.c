/**************************************/
/* Author : Asmaa Aboushady           */
/* Date   : 8/28/2024                 */
/**************************************/


#include "STD_Types.h"
#include "BitMath.h"
#include "BitMath.h"
#include "DIO_int.h"
#include <avr\io.h>

/*set pin direction*/
void DIO_voidSetPinDir(uint8 DIO_uint8_Port, uint8 DIO_uint8_Pin, uint8 DIO_uint8_Dir)
{
	if(DIO_uint8_Port == DIO_U8_PORTA)
	{
		if(DIO_uint8_Dir == DIO_U8_INPUT)
		{
			CLEAR_BIT(DDRA,DIO_uint8_Pin);
		}
		else if(DIO_uint8_Dir == DIO_U8_OUTPUT)
		{
			SET_BIT(DDRA,DIO_uint8_Pin);
		}
		else
		{
			/* no thing */
		}
	}
	else if(DIO_uint8_Port == DIO_U8_PORTB)
	{
		if(DIO_uint8_Dir == DIO_U8_INPUT)
		{
			CLEAR_BIT(DDRB,DIO_uint8_Pin);
		}
		else if(DIO_uint8_Dir == DIO_U8_OUTPUT)
		{
			SET_BIT(DDRB,DIO_uint8_Pin);
		}
		else
		{
			/* nothing */
		}
	}
	else if(DIO_uint8_Port == DIO_U8_PORTC)
	{
		if(DIO_uint8_Dir == DIO_U8_INPUT)
		{
			CLEAR_BIT(DDRC,DIO_uint8_Pin);
		}
		else if(DIO_uint8_Dir == DIO_U8_OUTPUT)
		{
			SET_BIT(DDRC,DIO_uint8_Pin);
		}
		else
		{
			/* no thing */
		}
	}
	else if(DIO_uint8_Port == DIO_U8_PORTD)
	{
		if(DIO_uint8_Dir == DIO_U8_INPUT)
		{
			CLEAR_BIT(DDRD,DIO_uint8_Pin);
		}
		else if(DIO_uint8_Dir == DIO_U8_OUTPUT)
		{
			SET_BIT(DDRD,DIO_uint8_Pin);
		}
		else
		{
			/* no thing */
		}
	}
	else
	{
		/* Do nothing */
	}
}

/*set pin value*/
void DIO_voidSetPinValue(uint8 DIO_uint8_Port, uint8 DIO_uint8_Pin, uint8 DIO_uint8_Val)
{	
	if(DIO_uint8_Port == DIO_U8_PORTA)
	{
		if(DIO_uint8_Val == DIO_U8_LOW)
		{
			CLEAR_BIT(PORTA,DIO_uint8_Pin);
		}
		else if(DIO_uint8_Val == DIO_U8_HIGH)
		{
			SET_BIT(PORTA,DIO_uint8_Pin);
		}
		else
		{
			/* no thing */
		}
	}
	else if(DIO_uint8_Port == DIO_U8_PORTB)
	{
		if(DIO_uint8_Val == DIO_U8_LOW)
		{
			CLEAR_BIT(PORTB,DIO_uint8_Pin);
		}
		else if(DIO_uint8_Val == DIO_U8_HIGH)
		{
			SET_BIT(PORTB,DIO_uint8_Pin);
		}
		else
		{
			/* no thing */
		}
	}
	else if(DIO_uint8_Port == DIO_U8_PORTC)
	{
		if(DIO_uint8_Val == DIO_U8_LOW)
		{
			CLEAR_BIT(PORTC,DIO_uint8_Pin);
		}
		else if(DIO_uint8_Val == DIO_U8_HIGH)
		{
			SET_BIT(PORTC,DIO_uint8_Pin);
		}
		else
		{
			/* no thing */
		}
	}
	else if(DIO_uint8_Port == DIO_U8_PORTD)
	{
		if(DIO_uint8_Val == DIO_U8_LOW)
		{
			CLEAR_BIT(PORTD,DIO_uint8_Pin);
		}
		else if(DIO_uint8_Val == DIO_U8_HIGH)
		{
			SET_BIT(PORTD,DIO_uint8_Pin);
		}
		else
		{
			/* no thing */
		}
	}
	else
	{
		/* nothing */
	}
}
/*get pin value*/
uint8 DIO_uint8GetPinValue(uint8 DIO_uint8_Port, uint8 DIO_uint8_Pin)
{
	uint8 Local_uint8_Result = 0;
	if(DIO_uint8_Port == DIO_U8_PORTA)
	{
		Local_uint8_Result = GET_BIT(PINA,DIO_uint8_Pin);
	}
	else if(DIO_uint8_Port == DIO_U8_PORTB)
	{
		Local_uint8_Result = GET_BIT(PINB,DIO_uint8_Pin);
	}
	else if(DIO_uint8_Port == DIO_U8_PORTC)
	{
		Local_uint8_Result = GET_BIT(PINC,DIO_uint8_Pin);
	}
	else if(DIO_uint8_Port == DIO_U8_PORTD)
	{
		Local_uint8_Result = GET_BIT(PIND,DIO_uint8_Pin);
	}
    else
	{
		/* Do nothing */
	}
	return Local_uint8_Result;
}

