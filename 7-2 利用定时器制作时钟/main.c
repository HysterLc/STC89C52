#include <REGX52.H>
#include "Delay.h"
#include "Timer0.h"
#include "LCD1602.h"

unsigned char Sec=0;
unsigned char Min=0;
unsigned char Hour=0;

int main()
{
    LCD_Init();
    LCD_ShowString(1,1,"Time:  :  :");       //初始化显示，定时器模块
    Timer0_Init();
    while(1)
    {
        LCD_ShowNum(1,12,Sec,2);
        LCD_ShowNum(1,9,Min,2);
        LCD_ShowNum(1,6,Hour,2);
    }
}

void Timer0_Routine() interrupt 1
{
    static unsigned int T0Count = 0;
    TH0=64609/256;
    TL0=64609%256;
    T0Count++;
    if(T0Count>=1000)
    {
        T0Count=0;
        Sec++;
        if(Sec>=60)
        {
            Sec=0;
            Min++;
            if(Min>=60)
            {
                Min=0;
                Hour++;
                if(Hour>=24)
                {
                    Hour=0;
                }
            }
        }
    }
}
