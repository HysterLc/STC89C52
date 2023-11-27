#include <REGX52.H>
#include <intrins.h>
#include "Timer0.h"

unsigned char KeyNum;
void main()
{
   Timer0_Init();
   P2=0xFE;
		int LEDMode =0;
    while(1)
    {
		
      KeyNum=key();
			if(KeyNum)
			{
				LEDMode++;
				if(LEDMode>=2)LEDMode=0;
			}
    }
}


void  Timer0_Routine() interrupt 1
{
	static unsigned int T0Count;
	unsigned 
   TH0=64609/256;
   TL0=64609%256;
   T0Count++;
   if(T0Count>=100)
   {
       T0Count=0;
       P2_1=~P2_1;
	   if(LEDMode==0)
	   		P2=_crol_(P2,1);
		if(LEDMode==1)
			P2=_crol_(P2,1);
   }
}

