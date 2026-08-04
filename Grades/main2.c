// Program to calculate grade using switch-case

#include <stdio.h>

int main()
{
    char *grade;
    int marks;

    printf("Enter the marks obtained: ");
    scanf("%d", &marks);

    switch (marks / 10)
    {
        case 10: 
        case 9:
            grade = "A+";
            break;

        case 8:
            grade = "B";
            break;

        case 7:
            grade = "C";
            break;

        case 6:
            grade = "D";
            break;

        case 5:
            grade = "E";
            break;

        case 4:
            grade = "P";
            break;

        default:
            grade = "F";
    }

    printf("The grade obtained is: %s\n", grade);

    return 0;
}
