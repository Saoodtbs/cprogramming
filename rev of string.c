#include <string.h>
#include <stdio.h>

int main()
{
    char s[100];
    printf("Enter a string to  get it's reverse\n");
    gets(s);
    strrev(s);
    printf("Reversed  string is %s\n", s);

    return 0;
}
