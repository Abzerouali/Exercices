#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase
 * Print all the letters except q and e
 * Return: 0
 */

int main(void)
{
		int a, b;

		for (b = 102; b >= 97; b--)
		{
			putchar(b);
		}
		for (a = 9; a >= 0; a--)
		{
			putchar(a + '0');
		}
		putchar('\n');

		return (0);
}
