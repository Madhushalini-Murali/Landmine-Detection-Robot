
#include<avr/io.h>
#include<util/delay.h>
void main()
{
	DDRD=0b00000000;
	DDRB=0b11111111;
	PORTB=0b11111111;
	int c;
	while(1)
	{
		c=PIND;
		if(c==0b11111111)
				PORTB=0b00001010;
		if(c==0b11111110)
				PORTB=0b00000110;
		if(c==0b11111101)
		{		
				PORTB=0b00000101;
				_delay_ms(3000);
				PORTB=0b00001001;
				_delay_ms(3000);
		}
		if(c==0b11111100)
		{
				PORTB=0b00000101;
				_delay_ms(3000);
				PORTB=0b00000110;
				_delay_ms(3000);
		}
		if(c==0b11111110)
				PORTB=0b00001001;
		if(c==0b11111010)
		{
				PORTB=0b00000101;
				_delay_ms(4000);
				PORTB=0b00001001;
				_delay_ms(3000);
		}
		if(c==0b11111001)
		{
				PORTB=0b00000101;
				_delay_ms(4000);
				PORTB=0b00001001;
				_delay_ms(3000);
		}
		if(c==0b11111000)
		{
				PORTB=0b00000101;
				_delay_ms(3000);
				PORTB=0b00001001;
				_delay_ms(3000);
		}
	`
		//the lower sensor detects, 0-presence of dark light 
		
		if(c==0b11110111)
				PORTB=0b00011010;
		if(c==0b11110110)
				PORTB=0b00010110;
		if(c==0b11110101)
		{		
				PORTB=0b00010101;
				_delay_ms(30000);
				PORTB=0b00011001;
				_delay_ms(30000);
		}
		if(c==0b11110100)
		{
				PORTB=0b00010101;
				_delay_ms(30000);
				PORTB=0b00010110;
				_delay_ms(30000);
		}
		if(c==0b11110110)
				PORTB=0b00011001;
		if(c==0b11110010)
		{
		
				PORTB=0b00000101;
				_delay_ms(30000);
				PORTB=0b00011001;
				_delay_ms(30000);
		}
		if(c==0b11110001)
		{
				PORTB=0b00010101;
				_delay_ms(30000);
				PORTB=0b00011001;
				_delay_ms(30000);
		}
		if(c==0b11110000)
		{
				PORTB=0b00010101;
				_delay_ms(30000);
				PORTB=0b00011001;
				_delay_ms(30000);
		}
	`
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
				
				