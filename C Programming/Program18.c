//Loop program that prints the muliplication table of given number.
#include<stdio.h>
void main(){
	int i, num;
	printf("Enter the number :");
	scanf("%d", &num);
	printf("Multiplication table\n %d" ,num);
	for(i=1; i<=10; i++){
	printf("\n %d*%d=%d",num,i,num*i);
      }
      return 0;
}