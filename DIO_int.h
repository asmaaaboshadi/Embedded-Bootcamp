/**************************************/
/* Author : Asmaa Aboushady           */
/* Date   : 8/28/2024                 */
/**************************************/

#ifndef DIO_INT_H_
#define DIO_INT_H_

#define DIO_U8_PORTA   0
#define DIO_U8_PORTB   1
#define DIO_U8_PORTC   2
#define DIO_U8_PORTD   3
					   
#define DIO_U8_PIN_0   0
#define DIO_U8_PIN_1   1
#define DIO_U8_PIN_2   2
#define DIO_U8_PIN_3   3
#define DIO_U8_PIN_4   4
#define DIO_U8_PIN_5   5
#define DIO_U8_PIN_6   6
#define DIO_U8_PIN_7   7

#define DIO_U8_INPUT   0
#define DIO_U8_OUTPUT  1

#define DIO_U8_LOW     0
#define DIO_U8_HIGH    1

/*set pin dircection*/
void DIO_voidSetPinDir(uint8 DIO_uint8_Port, uint8 DIO_uint8_Pin, uint8 DIO_uint8_Dir);

/*set pin value*/
void DIO_voidSetPinValue(uint8 DIO_uint8_Port, uint8 DIO_uint8_Pin, uint8 DIO_uint8_Val);

/*get pin value*/
uint8 DIO_uint8GetPinValue(uint8 DIO_uint8_Port, uint8 DIO_uint8_Pin);

/* set port value */
void DIO_voidAssignPortValue(uint8 DIO_uint8_Port, uint8 DIO_uint8_Val);

#endif