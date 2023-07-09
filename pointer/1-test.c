#include <stdio.h>

void main ()
{
	int i, arr[] = {100,200,300};
	int *ptr;
		    
	ptr = &arr;
		        
	while (ptr < &arr[3])
	{
		printf ("the address of arr[%x] is =%x\n", i, ptr);
		printf("the value of arr[%x] is =%d\n", i, *ptr);
		ptr++;
		i++;
	}
}
