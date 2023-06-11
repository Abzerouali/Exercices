#include <stdio.h>
int main(){
	int USD;
	float MAD;
	printf("Enter the amount you want in Dollars, please :\t");
	scanf("%d",&USD);
	printf("\nThe amount in Dirhams is :%.2f\n\n",USD*10.07);
}
