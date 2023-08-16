//program to print reverse no. using loop.
#include<stdio.h>
void main(){
	int num=0, rev=0, remainder;
	printf("Enter the no. :");
	scanf("%d",&num);
	while(num>0){
		remainder=num%10;
		rev=rev*10+remainder;
		num=num/10;
	}
	printf("Reverse of the number : %d",rev);
}