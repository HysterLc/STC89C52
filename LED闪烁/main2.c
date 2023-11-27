#include <REGX52.H>

void Delay(unsigned int ms)
{
    unsigned int i, j;

    for (i = 0; i < ms; i++)
    {
        for (j = 0; j < 114; j++)
        {
            // do nothing
        }
    }
}

void main()
{
    while(1)
    {
        P2=0x7F;   //0111 1111
        Delay(500);
        P2=0xFE;  // 1111 1110
        Delay(500);
    }
}