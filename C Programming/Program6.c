// progrmam shwoing case of swithc concept.
// output : Error


#include<stdio.h>
 #include<conio.h>
 void main()
 {
 	char ch = 'a';
 	switch(ch){
 		case 97 :{
 		    printf("Number\n");	
			break;
		}
		case 'a' : {
		 	printf("Character\n");
			break;
		}
		 default : {
		 	printf("Invalid selection\n");
			break;
		}
	 }
 }