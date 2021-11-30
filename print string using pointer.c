#include <stdio.h>

int main()
{
char str[100];
char *p;
printf("Enter the string \n");
gets(str);

p=str;
printf("The string is\n ");
while (*p!='\0')
{
    printf("%c",*p++);
}

    return 0;
}
