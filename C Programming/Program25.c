//program to print the sequence 0 4 16 36 64.......
#include<stdio.h>
void main(){
	int n=10;   //number of terms.
	int i,num;   //num=logic
	printf("Sequcence:\n");
	 for(i=0;i<=n;i++){
	 	num=i*i*4;
	 	printf("%d\n",num);
	 }
	 
}