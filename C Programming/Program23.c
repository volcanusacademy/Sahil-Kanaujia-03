//program to print cube roots of the n numbers
#include<stdio.h>
void main(){
	int n=8; //No. of terms
	int i,cube;
	printf("Cube of the numbers in sequence :\n");
	for(i=1;i<=n;i++){
		cube=i*i*i;
		printf("%d", cube);
	}
	printf("\n");
}