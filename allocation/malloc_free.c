#include <stdio.h>
#include <stdlib.h>

int f(int n0, int n1, int n2)
{
	int *t, sum;
	    
	t = malloc(sizeof(*t) * 3);
	    
	t[0] = n0;
	t[1] = n1;
	t[2] = n2;
	sum = t[0]+ t[1]+ t[2];
	printf("%d + %d + %d = %d\n", t[0], t[1], t[2], sum);
	free(t);
	return 0;
}
int main()
{
	f(10, -20, 30);
	return 0;
}
