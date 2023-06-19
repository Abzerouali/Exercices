#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase
 * Print all the letters except q and e
 * Return: 0
 */

int main(void)
{
		int a;

		for (a = 97; a <= 122; a++)
		{
			if (a != 101 && a != 113)
			putchar(a);
		}

		putchar('\n');

		return (0);
}
