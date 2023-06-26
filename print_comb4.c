#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase
 * Print all the letters except q and e
 * Return: 0
 */

int main(void)
{
		int x, y, z;

		for (x = 0; x <= 9; x++)
		{
			for (y = 1 + x; y <= 9; y++)
			{
				for (z = 1 + y; z <= 9; z++)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (x != 7 || y != 8 || z !=9)
					putchar(',');
					putchar(' ');
				}
			}
		}

		putchar('\n');

		return (0);
}
