void Timer0_Init()
{
	TMOD=TMOD&0xF0    //清零低四位，高位不变
	TMOD=TMOD|0x01     
										//	设置定时器模式
    TF0=0;        	//旗帜工作
    TR0=1;          //开始计时
    TH0=64610/256;
    TL0=64610%256+1;
    ET0=1;        //中断器通路
    EA=1;           //同上
    PT0=0;
}


/* void  Timer0_Routine() interrupt 1
{
	  unsigned int T0Count;
    TH0=64609/256;
    TL0=64609%256;
    T0Count++;
    if(T0Count>=100)
    {
        T0Count=0;
        P2_1=~P2_1;
    }
}
 */