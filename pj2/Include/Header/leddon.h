/*
 * leddon.h
 *
 * Created: 3/17/22 9:58:43 AM
 *  Author: TuanNguyen
 */ 


#ifndef LEDDON_H_
#define LEDDON_H_

void _leddon(void);

void _leddon(void)
{
	while (1)
	{
		unsigned int sangDan[] = {0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF};
		PORTD = 0xFF;
		_delay_ms(200);
		for (int i = 7; i>=0; i--)
		{
			PORTD = sangDan[i];
			_delay_ms(200);
		}

		unsigned int tatDan[] = {0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF};
		PORTD = 0x00;
		_delay_ms(200);
		for (int i = 0; i<=7; i++)
		{
			PORTD = tatDan[i];
			_delay_ms(200);
		}
		
		unsigned int lanLuot[] = {0b11111110, 0b11111101, 0b11111011, 0b11110111, 0b11101111, 0b11011111, 0b10111111, 0b01111111};
		PORTD = 0xFF;
		_delay_ms(200);
		for (int i = 0; i<=7; i++)
		{
			PORTD = lanLuot[i];
			_delay_ms(200);
		}
		_delay_ms(200);
		for (int i = 7; i>=0; i--)
		{
			PORTD = lanLuot[i];
			_delay_ms(200);
		}
		
		unsigned int veGiua[] = {0b01111110, 0b10111101, 0b11011011, 0b11100111, 0b11011011, 0b10111101, 0b01111110};
		PORTD = 0xFF;
		_delay_ms(200);
		for (int i = 0; i<=6; i++)
		{
			PORTD = veGiua[i];
			_delay_ms(200);
		}
	}
}



#endif /* LEDDON_H_ */