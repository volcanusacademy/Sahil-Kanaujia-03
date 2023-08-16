// program to calculate avereage of 5 numbers.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e;
	float avg;
	printf("Enter five numbers/n");
	scanf ("%d",&a);
      scanf ("%d",&b);
	scanf ("%d",&c);
	scanf ("%d",&d);
	scanf ("%d",&e);
	avg=(a+b+c+d+e)/5;
	printf("Average: %f",avg);
}