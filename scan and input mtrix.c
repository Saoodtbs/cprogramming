#include <stdio.h>

int main()
{
    int r, c;
    int a[10][20];
    int i, j;
    printf("Enter the no of rows of the matrix \n");
    scanf("%d", &r);
    printf("Enter the no of columns of the matrix \n");
    scanf("%d", &c);

    printf("Enter the elements of the %d X %d matrix \n", r, c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }


     printf("The  %d X %d matrix is
             \n", r, c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)

        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
