#include <stdio.h>
#include <stdlib.h>

int _free(int *ptr);

int main(void)
{
	int *t;
	int sum;

	t = malloc(sizeof(*t) * 3);
	t[0] = 89;
	t[1] = 402;
	t[2] = 1024;
	sum = t[0] + t[1] + t[2];
	printf("%d + %d + %d = %d\n", t[0], t[1], t[2], sum);
	_free(t);
	return (0);
}

int _free(int *ptr)
{
	free(ptr);
	return 0;
}
