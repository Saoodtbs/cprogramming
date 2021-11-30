// to input and print an array
#include <stdio.h>

int main()
{
    int a[100], i, n;
    printf("Enter the size of your array\n");
    scanf("%d", &n);

    printf("Enter the elements in the array\n",n);
for ( i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
printf("\nElements of the array are\n");
for ( i = 0; i < n; i++)
{
    printf("%d",a[i]);
    printf("\n");
}

    return 0;
}
