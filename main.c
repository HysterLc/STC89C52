#include <REGX52.H>
unsigned int T0Count;
void  Timer0_Routine() interrupt 1
{
    TH0=64609/256;
    TL0=64609%256;
    T0Count++;
    if(T0Count>=100)
    {
        T0Count=0;
        P2_1=~P2_1;
    }
}
void Timer0_Init()
{
    TMOD=0x01;         //设置定时器模式
    TF0=0;        //
    TR0=1;
    TH0=64609/256;
    TL0=64609%256;
    ET0=1;
    EA=1;
    PT0=0;
}



void main()
{
    Timer0_Init();
    while(1)
    {
        
    }
}


