/*
 * funcs.h
 *
 * Created: 3/17/22 9:18:54 AM
 *  Author: TuanNguyen
 */ 


#ifndef FUNCS_H_
#define FUNCS_H_
#define FRE 8000000UL

unsigned char push_button;

uint8_t buttCheck();

/*-----------------------------------------------------*/
uint8_t buttCheck()
{
	if ((PINB & 0x0F) != 0x0F)
	{
		//if(!(PINB & (1<<PB0)))
		if(!(PINB & (1<<PINB0)))
		return 1;
		
		if(!(PINB & (1<<PINB1)))
		return 2;
		
		if(!(PINB & (1<<PINB2)))
		return 3;
		
		if(!(PINB & (1<<PINB3)))
		return 4;
	}
	return 0;
}



#endif /* FUNCS_H_ */