#include <REGX52.H>
#include "Delay.h"

/**


矩阵键盘3X3+0

*/



unsigned char MatrixKey()
{
	int i=3;
	int m=1;
	unsigned char KeyNumber=0;

	P1=0xFF;           //第一列
	P1_3=0;
	if(P1_7==0)
	{
		Delay(20);
		while(P1_7==0);
		{
			
		}
		Delay(20);
		KeyNumber=1;   //（1，1）
	}
	if(P1_6==0)
	{
		Delay(20);
		while(P1_6==0);
		{
			
		}
		Delay(20);
		KeyNumber=4;  //（2，1）
	}
	if(P1_5==0)
	{
		Delay(20);
		while(P1_5==0);
		{
			
		}
		Delay(20);
		KeyNumber=7;  //（3，1）
	}
	
	
	P1=0xFF;            //第二列
	P1_2=0;
	if(P1_7==0)
	{
		Delay(20);
		while(P1_7==0);
		{
			
		}
		Delay(20);
		KeyNumber=2;    //（1，2）
	}
	if(P1_6==0)
	{
		Delay(20);
		while(P1_6==0);
		{
			
		}
		Delay(20);
		KeyNumber=5;  //（2，2）
	}
	if(P1_5==0)
	{
		Delay(20);
		while(P1_5==0);
		{
			
		}
		Delay(20);
		KeyNumber=8; //（2，3）
	}
	
	
	P1=0xFF;      //第三列
	P1_1=0;
	if(P1_7==0)
	{
		Delay(20);
		while(P1_7==0);
		{
			
		}
		Delay(20);
		KeyNumber=3;  //(1,3)
	}
	if(P1_6==0)
	{
		Delay(20);
		while(P1_6==0);
		{
			
		}
		Delay(20);
		KeyNumber=6;  //(2,3)
	}
	if(P1_5==0)
	{
		Delay(20);
		while(P1_5==0);
		{
			
		}
		Delay(20);
		KeyNumber=9; //(3,3)
	}
	
	
	
	P1=0xFF;
	P1_2=0;
	if(P1_4==0){Delay(20);while(P1_4==0);Delay(20);KeyNumber=0;}
	
	
	
	
		return KeyNumber;
}
	

