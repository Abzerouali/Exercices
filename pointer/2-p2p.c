#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */

int main ()
{
	int var = 1000;
	int *p;
	int **p2;
	
	p = &var;
	p2 = &p;

	printf("the value of var = %d\n", var);
	printf("the value of *p = %d\n", *p);
	printf("the value of **p2 = %d\n", **p2);
	return (0);
}
