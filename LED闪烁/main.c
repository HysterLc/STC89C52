#include <REGX52.H>

void Delayxms(x)     //@11.0592MHz
{
	while(x)
  {  
		unsigned int i, j;

    for (i = 0; i < 1000; i++)
    {
        for (j = 0; j < 114; j++)
        {
            // do nothing
        }
    }
		x--;
	}
}

void main()
{

	while(1)
	{
		int i =500;
		P2=0x7F;   //0111 1111

		Delayxms(1);
		
			P2=0xFE; 
		 // 1111 1110
	}
}