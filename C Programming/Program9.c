//Program to check whether the year is leap year or not.
#include<stdio.h>
void main ()
{
	int year;
	printf("Enter year :");
	scanf("%d" ,&year);
	
	if(year%4==0){
		if(year%100==0){
			if(year%400==0){
				printf("Year is the leap year");
			}else
			printf("Year is not a leap year");
		}else
		printf("Year is a leap year");
	}else
	printf("Year is not a leap year");
	}