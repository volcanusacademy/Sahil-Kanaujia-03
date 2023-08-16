      // Program to calculate Simple interest
        #include<stdio.h>
        #include<conio.h>
        main ()
      {
      float p,r,t,si;
      printf ("Enter Principle amount=");
      scanf ("%f",&p);
      printf("Enter Rate of interest=");
      scanf("%f",&r);
      printf("Enter Time=");
      scanf("%f",&t);
      si=(p*r*t)/100;
      printf("The simple interest= %f",si);
}
      