//Program showing the concept of switch case.
#include<stdio.h>
void main(){
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	
	switch(num%2){
		case 0 :
			printf("Number is even\n");
			break;
		default:
	      	printf("Number is the odd\n");
	      	break;
	}
}