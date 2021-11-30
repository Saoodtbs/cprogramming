#include <stdio.h>
int fact(int);

int main()
{
    int x;
    int ans;
    printf("Enter the number whose factorial you want to print\n");
    scanf("%d",&x);
    ans= fact(x);
    printf("The factorial of %d is %d \n]",x,ans);

}
int fact (int n)
{
    if (n>1)
    {
        return n*fact(n-1);
    }
    else
    return 1;


}
