#include <stdio.h>
int main()
{
 
  int t1 = 1, t2 = 1 , i, n;

 int nxt = t1 + t2;

    printf("Enter the number of terms: ");
  scanf("%d", &n);

   printf("Fibonacci Series: %d, %d, ", t1, t2);
  for (i = 3; i <= n; i++)
   {
    printf("%d, ", nxt);
    t1 = t2;
    t2 = nxt;
    nxt = t1 + t2;
  }

  return 0;
}