//program of loop to print sum of numbers from 1 to 100.
#include<stdio.h>
void main(){
	int i, sum=0;
	for(i=1;i<=100;i++)
	{
		sum = sum+i;
	}
	printf("Sum of numbers from 1 to 100 :\n%d" ,sum);
	return 0;
}