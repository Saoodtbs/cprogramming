#include <stdio.h>
int main() 
{
   int i, j, r=6;
   
   for (i = r; i >= 1; i--) 
   {
      for (j = 1; j <= i; ++j) 
      {
         printf("* ");
      }
      printf("\n");
   }
   return 0;

}