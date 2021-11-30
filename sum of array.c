#include<stdio.h>
#include <conio.h>

 int sumOFarray(int a[],int n)
 {
 	int i,sum=0;

    for(i=0; i<n; i++)
    {
         sum+=a[i];

    }
 	return sum;
 }
int main()
{
    int a[100],i,n,sum;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements for the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    sum=sumOFarray(a,n);
    printf("sum of array is :%d",sum);


}
