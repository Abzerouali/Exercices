#include <stdio.h>

int f(int x)
{
	(void)x;
	return 1;
}


int main ()
{
	int count = 23;
	    
	f(count);
	printf("the %d =test", count);
	return 0;
}
