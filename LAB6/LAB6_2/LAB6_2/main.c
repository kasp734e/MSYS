/*
 * LAB6_2.c
 *
 * Created: 01-10-2024 10:25:08
 * Author : kasperjensen
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>

int main(void)
{
	DDRA = 0x00;
	DDRB = 0xFF;
 
      while (1) 
    {
		if (PINA == 0b10000000) {
			PORTB = 0b11111111;
			_delay_us(956)
			PORTB = 0b00000000;}
		
		if (PINA == 0b01000000) {
			PORTB = 0b11111111;
			_delay_us(851)
			PORTB = 0b00000000;}			
		
		if (PINA == 0b00100000) {
			PORTB = 0b11111111;
			_delay_us(758)
			PORTB = 0b00000000;}			
		
		if (PINA == 0b00010000) {
			PORTB = 0b11111111;
			_delay_us(716)
			PORTB = 0b00000000;}			
		
		if (PINA == 0b00001000) {
			PORTB = 0b11111111;
			_delay_us(638)
			PORTB = 0b00000000;}			
		
		if (PINA == 0b00000100) {
			PORTB = 0b11111111;
			_delay_us(568)
			PORTB = 0b00000000;}			
		
		if (PINA == 0b00000010) {
			PORTB = 0b11111111;
			_delay_us(506)
			PORTB = 0b00000000;}	
		
		if (PINA == 0b00000001) {
			PORTB = 0b11111111;
			_delay_us(478)
			PORTB = 0b00000000;}	
    }
}

