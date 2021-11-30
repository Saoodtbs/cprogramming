#include <stdio.h>
int main()
{
    int m, n, i, j;
    int a[10][10], b[10][10];
    printf("Enter rows and columns :\n");
    scanf("%d%d", &m, &n);
    printf("Enter elements of the matrix\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            b[j][i] = a[i][j];

    printf("Transpose of the  given matrix is :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d\t", b[i][j]);
        printf("\n");
    }
    return 0;
}
