#include <stdio.h>
/**
*main - entry point
*Return: 0
*/
int main(void)
{

	int x ,y;
	for (x = 0;x <= 9; x++)
	{
		for (y = 97; y <= 122; y++)
		{
			putchar(y);
		}
		putchar('\n');
	}
putchar('\n');
return (0);
}
