void Delay(int xms)		//@11.0592MHz
{
	while(xms)
	{
	unsigned char i, j;

	i = 2;
	j = 239;
	do
	{
		while (--j);
	} while (--i);
		xms--;
	}
}
