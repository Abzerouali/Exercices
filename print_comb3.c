#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase
 * Print all the letters except q and e
 * Return: 0
 */

int main(void)
{
		int x;

		for (x = 0; x <= 89; x++)
		{
			putchar(x / 10 + '0');
			putchar(x % 10 + '0');
			if (x == 89)
			break;
			putchar(44);
			putchar(32);
		}
		putchar('\n');

		return (0);
}
