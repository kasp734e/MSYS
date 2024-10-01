/*
 * LAB6_1.c
 *
 * Created: 01-10-2024 10:14:09
 * Author : kasperjensen
 */ 

#include <avr/io.h>


int main(void)
{
    unsigned char i = 0;
	DDRA = 0xFF; //port A as output
	DDRB = 0xFF; //port B as output
	DDRC = 0xFF; //port C as output
	PORTA = 0xAA;
	while (1) { 
		PORTC = PORTC ^ 0b00000001; //Toggle PORTC.0
		PORTB = i;
		i++;
		}
}

