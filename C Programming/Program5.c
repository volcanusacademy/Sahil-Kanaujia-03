 //program for leap year if else.
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 	int year;
 	printf("Enter year:");
	 scanf("%d",&year);
	 
	 if(year%4==0){
	 	if(year%100==0){
	 		if(year%400==0){
	 			printf("Year is a leap year");
			 }else
			      printf("Year is not aleap year");
		 }else
		 printf("Year is aleap year");
	 }else
	 printf("Year is not a leap year");
}

        
        