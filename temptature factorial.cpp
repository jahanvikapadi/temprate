#include<stdio.h>
main()
{
   int x,fact=1,number;
   printf("enter the number to factorial\n");
   scanf("%d",&number);
   for(x=1;x<=number;x++){
   fact=fact*x;
   }
   
   printf("factorial of %d is: %d",number,fact);
}

