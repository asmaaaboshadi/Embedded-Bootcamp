/*
 * main.c
 *
 * Created: 8/13/2024 2:09:29 AM
 *  Author: somaa
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>

void init ()
{
	DDRC=0b01111111;
	DDRB=0b00000111;
}

void display_digit(int digit) {
	switch (digit) {
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

int main(void)
{
	init();
	while(1)
	
	{    
		unsigned char j ;
		for (j=0; j<3 ; j++)
		{
			switch (j){
				case 0:
				PORTB=0b00000001;
				for (int i = 9; i >= 0; i--) {
					display_digit(i);
					_delay_ms(50);
				}
			
				break;
				
				case 1:
				PORTB=2;
				for (int i = 9; i >= 0; i--) {
					display_digit(i);
					_delay_ms(50);
				}
				break;
				
				case 2:
				
				PORTB=4;
				for (int i = 9; i >= 0; i--) {
					display_digit(i);
					_delay_ms(50);
				}
				break;
				
			}
			_delay_ms(50);
			
		}
		
	}
}