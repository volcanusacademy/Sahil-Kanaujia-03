//Program to find out the sum of all the digits of 5 digit no.
#include<stdio.h>
void main (){
int num,reminder,sum=0;
printf("Enter the number :");
scanf("%d",&num);
while (num>0)
{
	reminder=num%10;
	sum=sum+reminder;
	num=num/10;
}
printf("Sum of the number : %d",sum);

	
	
}
