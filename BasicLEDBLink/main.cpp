/*
 * BasicLEDBLink.cpp
 *
 * Created: 8/26/2025 8:03:03 PM
 * Author : Ethan Wappes
 *
 * A simple test code to verify my IDE is setup correctly.
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void io_int(void);

int main(void)
{
   io_int();
   
    while (1) 
    {
		PORTA = 0xFF;
		_delay_ms(1000);
		
		PORTA = 0x00;
		_delay_ms(250);
    }
}

void io_int(void)
{
	DDRA = 0xFF;
	PORTA= 0x00;
}