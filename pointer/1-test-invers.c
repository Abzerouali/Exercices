#include <stdio.h>

void main ()
{
	int i = 3, y, arr[] = {100,200,300};
	int *ptr;

	ptr = &arr;
	y = 0;

	while (y < 2)
	{
		y++;
		ptr++;
	}
	while (ptr >= &arr[0])
	{
		printf ("the address of arr[%x] is =%x\n", i, ptr);
		printf("the value of arr[%x] is =%d\n", i, *ptr);
		ptr--;
		i--;
	}
}
