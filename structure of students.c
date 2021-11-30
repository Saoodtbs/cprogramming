#include <stdio.h>

struct student
{
    int rollno;
    char name[50];
    float marks;
};

int main()
{
    int i;
    struct student s[10];
    for (i = 0; i < 5; i++)
    {
        printf("Enter Roll No , Name & Marks of the student %d\n",i+1);
        scanf("%d %s %f", &s[i].rollno, &s[i].name, &s[i].marks);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Roll No = %d\t\n Name = %s\t\n  Marks = %f\t\n", s[i].rollno, s[i].name, s[i].marks);
    }

    return 0;
}
