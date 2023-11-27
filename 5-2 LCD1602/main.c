#include <REGX52.H>
#include "LCD1602.h"
#include "Delay.h"
#include <intrins.h>


void Delay();



void main()
{
	int Result=1;
	LCD_Init();
  while(1)
	{
		Result++;
		Delay(1000);
		LCD_ShowNum(1,1,Result,5);
	}
}