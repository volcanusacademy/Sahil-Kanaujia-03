//program to print sequence no. in 7,14,21,28,35.....
#include<stdio.h>
void main(){
	int n=10;    // number of terms
	int i, table=7;
	printf("Sequence :\n");
	for(i=1;i<=n;i++){
		table=7*i;
		printf("%d",table);
	}
	
	printf("\n");
}