// Program to calculate Grades using if-else
#include <stdio.h>

int main()
{
    char *grade;
    int marks;
    printf("Enter the marks obtained : ");
    scanf("%d", &marks);
    
    if(marks>90)
    {
        grade = "A+";
        printf("The grade as obtained is : %s\n", grade);
        return 0;
    }
    if(marks>80)
    {
        grade = "B";
        printf("The grade as obtained is : %s\n", grade);
        return 0;
    }
    if(marks>70)
    {
        grade = "C";
        printf("The grade as obtained is : %s\n", grade);
        return 0;
    }
    if(marks>60)
    {
        grade = "D";
        printf("The grade as obtained is : %s\n", grade);
        return 0;
    }
    if(marks>50)
    {
        grade = "E";
        printf("The grade as obtained is : %s\n", grade);
        return 0;
    }
    if(marks>40)
    {
        grade = "P";
        printf("The grade as obtained is : %s\n", grade);
        return 0;
    }
    else
    {
        grade = "F";
        printf("The grade as obtained is : %s\n", grade);
        return 0;
    }
    
    return 0;
}
