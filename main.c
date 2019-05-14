/*
 * GccApplication3.c
 *
 * Created: 09-May-19 6:24:16 PM
 * Author : JAYASREE
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    /* Replace with your application code */
	DDRA=0XFF;
	
    while (1) 
    {
		PORTA=0X55;
		_delay_ms(100);
		PORTA=0XAA;
		_delay_ms(100);
		
    }
}

