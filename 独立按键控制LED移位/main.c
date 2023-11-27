#include <REGX52.H>
#include <INTRINS.H>

unsigned char LEDNum=-1;

void Delay(x)		//@11.0592MHz
{
	while(x)
	{
		unsigned char i, j;

	_nop_();
	_nop_();
	_nop_();
	i = 11;
	j = 190;
	do
		{
				while (--j);
		} while (--i);
		--x;
	}
}


void main()
{
	while(1)
{
	if(P3_0==0)
	{
		Delay(20);
		while(P3_0==0);
		Delay(20);
		
		
		LEDNum++;
		
		if(LEDNum>=8)
		{
			LEDNum=0;
		}
		
		P2=~(0x01<<LEDNum);
	}
}
}