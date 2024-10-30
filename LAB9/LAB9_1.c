/*
 * LAB9_1.c
 *
 * Created: 29-10-2024 10:21:52
 * Author : kasperjensen
 */ 

#include <avr/io.h>


int main(void)
{
	int ocrnValue = 31249;
	ocrnValue += ocrnValue;
	
	DDRB = 0b11111111;
	PORTB = 0b00000000;

	TCCR1A = 0b01000000;
	TCCR1B = 0b00001100;

	OCR1A = ocrnValue;
	
	while (1) {}
}

