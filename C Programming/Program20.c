// Loop program to print patter 1234 hello and 5678 and hello.
#include<stdio.h>
void main(){
	int i;
	for(i=1;i<=4;i++){
	printf("%d",i);}
	
	printf("Hello");
	for(i=5;i<=8;i++){
		printf("%d",i);
	}
	printf("Hello\n");
}