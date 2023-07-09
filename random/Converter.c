#include <stdio.h>
/**
 * main - entry point
 * return: 0 (succes)
 */
int main(void)
{
	int D;

	printf("\tWrite the number in Decimals :\t");
	scanf("%d", &D);
	printf("\tThe number in Decimals is :%d\n", D);
	printf("\tThe number in Octal :%o\n", D);
	printf("\tThe number in Hexadecimals :%x\n", D);
return (0);
}
