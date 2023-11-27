#include <REGX52.H>
#include "Delay.h"
#include "LCD1602.H"
#include "MatrixKey.h"


void main()
{

		LCD_Init();
		LCD_ShowString(1,5,"FUCK YOU");
		
	while(1)
	{
		int KeyNum=MatrixKey();
		int Key=KeyNum+1
		while(KeyNum)
			{
			LCD_ShowNum(2,8,KeyNum,2);
				KeyNum=-1;
			}
	}
}