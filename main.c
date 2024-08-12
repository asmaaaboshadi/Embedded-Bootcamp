/*
 * main.c
 *
 * Created: 8/13/2024 1:07:05 AM
 *  Author: somaa
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>

void init ()
{
DDRC=0b00000111;	
}

int main(void)
{
    init();
    while(1)
    {    unsigned char i ;
		 for (i=0;i<3 ; i++)
		 {
			 switch (i){
				 case 0:
				 PORTC=0b00000001;
				 break;
				 
				 case 1:
				 PORTC=2;
				 break;
				 
				 case 2:
				 PORTC=4;
				 break;
				 
			 }
			 _delay_ms(50);
			 
		     }
       
    }
}