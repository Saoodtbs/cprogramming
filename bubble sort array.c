// write a program to sort an array using bubble sort
#include <stdio.h>
void bsort(int[], int);

int main()
{
    int a[100];
    int n, i;
    printf("Enter the size of the array \n");
    scanf("%d", &n);

    printf("Enter the elemets of the array\n");

    for (i = 0; i < n; i = i + 1)
    {
        scanf("%d", &a[i]);
    }
    printf("The Original order is");
    for (i = 0; i < n; i = i + 1)
    {
        printf("%d", a[i]);
          }
    bsort(a, n);
}

void bsort(int x[], int s)


{
    int j, i, temp;
     for (i = 0; i < s - 1; i++)
    {  for (j = 0; j < s - 1; j++)
           {
            if (x[j] > x[j + 1])
            {
            temp = x[j];
            x[j] = x[j + 1];
            x[j + 1] = temp;
            }
           }
     }
      printf("After sorting the elements will be \n");
      for (i = 0; i < s; i++)
     {
     printf("%d", x[i]);
     printf("\n");
     }
}
