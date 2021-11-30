#include <stdio.h>

int main()
{
    int n, i, fact = 1;
    printf("Please enter the number\n");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("The Factoiral of the given number is %d", fact);
    return 0;
}
