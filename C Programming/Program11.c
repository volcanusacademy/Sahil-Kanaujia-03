//Program to reverse a 4 digit number
#include<stdio.h>
void main(){
	int first,second,third,fourth,rev,num;
	printf("Enter the 4-digit number :");
	scanf("%d", &num);
	
	if (num<1000 || num>9999){
	printf("Invalid input please enter the 4-digit number :");
	return 1; //Exit the program with error code
      }
      first = (num%10);
      second= (num/10)%10;
      third=(num/100)%10;
      fourth=(num/1000);
      
      rev = first*1000+ second*100+ third*10+ fourth*1;
      printf("Reverse : %d\n", rev);
}