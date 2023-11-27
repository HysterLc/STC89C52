#include <REGX52.H>
#include <INTRINS.H>

void Delayxms(x)		//@11.0592MHz
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
		if(P3_1==0)
		{
			Delayxms(20);
			while(P3_1==0)
				{
					P2=0x0;     //00000000
				}
				Delayxms(20);
				P2=~P2;
			
		}
	}
}