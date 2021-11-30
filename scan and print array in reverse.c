#include <stdio.h>

int main()
{
    int a[100], i, n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);

    printf("Enter the elements in the array\n",n);
for ( i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
printf("\nElements of the array in order are\n");
for ( i = 0; i < n; i++)
{
    printf("%d",a[i]);
    printf("\n");
}
printf("The array in reverse order is\n");
for ( i = n-1; i >=0; i--)
{
    printf("%d",a[i]);
    printf("\n");
}
    return 0;
}
