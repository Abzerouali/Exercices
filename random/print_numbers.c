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

		for (x = 0; x <= 9; x++)
		{
			putchar(x + 48);
		}
		putchar('\n');
		return (0);
}
