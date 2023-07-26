#include <stdio.h>
 
int add(int a, int b);
int mult(int x, int y);

int main () {
	int a = 9, b = 4;
	int ad = mult(a, b);
		    
	printf("the add :%d", ad);
}

int add (int a, int b){
	int result = a + b;

	return result;
}

int mult(int x, int y){
	int result = 0;
	for(int i = 0; i < x; i++)
	{
		result = add(y, result);
	}
	return result;
}
