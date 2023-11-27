#include <REGX52.H>


unsigned char KeyNum;
void main()
{
//    Timer0_Init();
    while(1)
    {
      KeyNum=key();
			if(KeyNum)
			{
				if(KeyNum==1)P2_1=~P2_1;
				if(KeyNum==2)P2_2=~P2_2;
				if(KeyNum==3)P2_3=~P2_3;
				if(KeyNum==4)P2_4=~P2_4;
			}
    }
}


//void  Timer0_Routine() interrupt 1
//{
//	  unsigned int T0Count;
//    TH0=64609/256;
//    TL0=64609%256;
//    T0Count++;
//    if(T0Count>=100)
//    {
//        T0Count=0;
//        P2_1=~P2_1;
//    }
//}

