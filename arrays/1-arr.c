#include <stdio.h>

int main(void)
{
	int a[5];
	int i;

	a[0] = 98;
	a[1] = 198;
	a[2] = 298;
	a[3] = 398;
	a[4] = 498;

	for (int i = 0; i < 5; i++)
	{
		    printf("Value of a[%d]: %d\n", i, a[i]);
		        printf("Address of a[%d]: %p\n", i, &(a[i]));
	}
	return (0);
}
