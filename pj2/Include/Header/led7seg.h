/*
 * led7seg.h
 *
 * Created: 3/17/22 10:00:24 AM
 *  Author: TuanNguyen
 */ 


#ifndef LED7SEG_H_
#define LED7SEG_H_

void _7seg(void);

void _7seg(void)
{
	while (1)
	{
		unsigned int MaLed[10] ={0x88,0xEB,0x4C,0x49,0x2B,0x19,0x18,0xCB,0x08,0x09}; // 1 den 9
		//unsigned int MaLed[8] ={0x9F,0x3F,0x7B,0xF9,0xFC,0x7E,0x6F,0xCF}; // vong so 8
		for (int i=0;i<10;i++)
		{
			PORTC = MaLed[i];
			_delay_ms(500);
		}
	}
}



#endif /* LED7SEG_H_ */