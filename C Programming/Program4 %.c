//Program to calculate the sum and percentage of 5 subjects.
#include<stdio.h>
#include<conio.h>
void main ()
{
   int e,m,s,h,c,Total;
   float Per;
   printf("Enter the marks of English=");
   scanf("%d",&e);
   printf("Enter the marks of Maths=");
   scanf("%d",&m);
   printf("Enter the marks of Science=");
   scanf("%d",&s);
   printf("Enter the marks of Hindi=");
   scanf("%d",&h);
   printf("Enter the marks of Computer=");
   scanf("%d",&c);
   Total=e+m+s+h+c;
   printf("Total marks=%d \n", Total);	
   Per=(Total/500)*100;
   printf("Percentage= %f",Per);
   getch();
}