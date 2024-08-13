/*
 * main.c
 *
 * Created: 8/13/2024 3:07:53 AM
 *  Author: somaa
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>

void init ()
{
	DDRC=0b01111111;
	DDRB=0b01111111;
}
void display_digit_two (int digit1) {
	switch (digit1) {
		case 0:
		PORTC = 0b00111111;
		break;
		case 1:
		PORTC = 0b00000110;
		break;
		case 2:
		PORTC = 0b01011011;
		break;
		case 3:
		PORTC = 0b01001111;
		break;
		case 4:
		PORTC = 0b01100110;
		break;
		case 5:
		PORTC = 0b01101101;
		break;
		case 6:
		PORTC = 0b01111101;
		break;
		case 7:
		PORTC = 0b00000111;
		break;
		case 8:
		PORTC = 0b01111111;
		break;
		case 9:
		PORTC = 0b01101111;
		break;
		default:
		PORTC = 0b00000000;  // All segments off for invalid input
		break;
	}
}
void display_digit_one (int digit2) {
	switch (digit2) {
		case 0:
		PORTB = 0b00111111;
		break;
		case 1:
		PORTB = 0b00000110;
		break;
		case 2:
		PORTB = 0b01011011;
		break;
		case 3:
		PORTB = 0b01001111;
		break;
		case 4:
		PORTB = 0b01100110;
		break;
		case 5:
		PORTB = 0b01101101;
		break;
		case 6:
		PORTB = 0b01111101;
		break;
		case 7:
		PORTB = 0b00000111;
		break;
		case 8:
		PORTB = 0b01111111;
		break;
		case 9:
		PORTB = 0b01101111;
		break;
		default:
		PORTB = 0b00000000;  // All segments off for invalid input
		break;
	}
}

int main(void)
{
	init(); 

	int count = 0;

	while (1) {
		int digit_one = count % 10; 
		int digit_two = count / 10; 

		display_digit_one(digit_one); 
		display_digit_two(digit_two); 

		_delay_ms(30); 

		count++; 

		if (count > 99) { 
			count = 0;
		}
	}

	return 0;
}