#include <REGX52.H>
#include "Delay.h"
#include "LCD1602.H"
#include "MatrixKey.h"

unsigned int Password;
unsigned char KeyNum;
unsigned char Count=1;

void main()
{
	  
		LCD_Init();
		LCD_ShowString(1,5,"FUCK YOU ");
		
	while(1)
	{
		KeyNum=MatrixKey();
		if(KeyNum)
		{
			if(KeyNum<=10&&Count<=4)   //检测密码
			{
			
				KeyNum%10;  //输入10转化为零
				Password*=10;          //左移
				Password+=KeyNum%10;  //第二位
				LCD_ShowNum(2,5,Password,4);
				Count++;
			}
			if(KeyNum==11)
			{
				if(Password==1234)
				{
				LCD_ShowString(1,14," OK");
					Password=0;
					Count=0;
					LCD_ShowNum(2,5,Password,4);
				}
				else
				{
					LCD_ShowString(1,14,"ERR");
					Password=0;
					Count=0;
						LCD_ShowNum(2,5,Password,4);
				}
			}
			if(KeyNum==12)    //取消
			{
					Password=0;
					Count=0;
					LCD_ShowNum(2,5,Password,4);
					
			}
		}
		
	}
}