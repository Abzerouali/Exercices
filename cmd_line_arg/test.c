#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, j;
	for(j = 0; j < 1; j++)
		printf("number of arguments is :%d\n", argc);
		for (i = 0; i < argc; i++)
		{
		printf("Arguments is :%s\n", argv[i]);
		}
}
