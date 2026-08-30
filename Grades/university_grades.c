#include <stdio.h>
#include <conio.h>

struct student
{
    float subject1;
    float subject2;
    float subject3;
};

struct result
{
    float average;
    char grade;
};

void input_marks(struct student *s)
{
    printf("\nEnter marks obtained in three subjects:\n");

    printf("Subject 1: ");
    scanf("%f", &s->subject1);

    printf("Subject 2: ");
    scanf("%f", &s->subject2);

    printf("Subject 3: ");
    scanf("%f", &s->subject3);
}

int validate_marks(struct student s)
{
    if (s.subject1 < 0 || s.subject1 > 100 ||
        s.subject2 < 0 || s.subject2 > 100 ||
        s.subject3 < 0 || s.subject3 > 100)
    {
        return 0;
    }

    return 1;
}

struct result calculate_result(struct student s)
{
    struct result r;

    r.average = (s.subject1 + s.subject2 + s.subject3) / 3.0;

    if (r.average >= 90)
    {
        r.grade = 'A';
    }
    else if (r.average >= 80)
    {
        r.grade = 'B';
    }
    else if (r.average >= 70)
    {
        r.grade = 'C';
    }
    else if (r.average >= 60)
    {
        r.grade = 'D';
    }
    else if (r.average >= 50)
    {
        r.grade = 'E';
    }
    else
    {
        r.grade = 'F';
    }

    return r;
}

void display_result(struct student s, struct result r)
{
    printf("\n========================================\n");
    printf("           STUDENT RESULT               \n");
    printf("========================================\n");

    printf("Subject 1 Marks : %.2f\n", s.subject1);
    printf("Subject 2 Marks : %.2f\n", s.subject2);
    printf("Subject 3 Marks : %.2f\n", s.subject3);

    printf("----------------------------------------\n");

    printf("Average Marks   : %.2f\n", r.average);
    printf("Final Grade     : %c\n", r.grade);

    printf("========================================\n");
}

int main()
{
    struct student s;
    struct result r;

    printf("========================================\n");
    printf("       UNIVERSITY RESULT SYSTEM         \n");
    printf("========================================\n");

    input_marks(&s);

    if (!validate_marks(s))
    {
        printf("\nERROR: Invalid marks entered.");
        printf("\nMarks must lie between 0 and 100.\n");

        getch();
        return 1;
    }

    r = calculate_result(s);

    display_result(s, r);

    getch();
    return 0;
}