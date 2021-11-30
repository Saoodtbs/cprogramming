// Write a program in c to find if a number ir prime or not using function
#include<stdio.h>

int chk(int);

main()
{
   int n, result;

   printf("Enter an integer to check ifit is a prime no. or not.\n");
   scanf("%d",&n);

   result = chk(n);

   if ( result == 1 )
      printf("%d is prime.\n", n);
   else
      printf("%d is not prime.\n", n);

   return 0;
}

int chk(int a)
{
   int c;

   for ( c = 2 ; c <= a - 1 ; c++ )
   {
      if ( a%c == 0 )
     return 0;
   }
   return 1;
}

