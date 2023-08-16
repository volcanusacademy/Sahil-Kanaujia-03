//Program to print n natural no.
#include<stdio.h>
void main(){
	int n,i;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	if(n<=0){
		printf("Enter the positive integer. \n");
	}else{
	      printf("First %d natural numbers:,\n",n);
	      for(i=0; i<=n; i++){
	      	printf("%d",i);	
	}
	printf("\n");
	}
	
}