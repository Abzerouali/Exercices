#include <stdio.h>

unsigned int factorial(unsigned int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}
int main()
{
	unsigned int num = 5;
	unsigned int result = factorial(num);

	printf("Factorial of %u is %u\n", num, result);
	return 0;
}
