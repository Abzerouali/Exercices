#include <stdio.h>

void increment(int a)
{
	x = x + 1;
	printf("The value of x inside the function is %d\n", x);
}

int main() 
{
	int a = 5;

	increment(a);
	printf("The value of a outside the function is %d\n", a);
	return 0;
}
