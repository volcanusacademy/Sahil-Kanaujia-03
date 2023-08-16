//Program to print squares of the numbers.
#include<stdio.h>
void main(){
	int n=8; //Number of terms
	int i,square;
	 printf("Square of the numbers in the sequence:\n");
	 for (i=1;i<=n;i++)
	{
		square=i*i;
		printf("%d", square);
	}
	 printf("\n");
}