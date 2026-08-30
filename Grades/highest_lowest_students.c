#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//defining a global constructor
struct students


{
    char key[5];
    char name[50];
    float marks;
};

int n; // variable defining the size of the array
struct students *s;

void input()
{
    printf("Enter the no of students to store data: ");
    scanf("%d", &n);

    // Allocate memory for n students
    s = malloc(n * sizeof(struct students));

    //Acceptiong data from the user
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the details of %dth student.\n", i + 1);

        printf("Enter student ID: ");
        scanf("%4s", s[i].key);

        printf("Enter the name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter the marks: ");
        scanf("%f", &s[i].marks);
    }
}

void high_low()
{
    float highest = s[0].marks;
    float lowest = s[0].marks;

    int h_index = 0;
    int l_index = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i].marks > highest)
        {
            highest = s[i].marks;
            h_index = i;
        }

        if (s[i].marks < lowest)
        {
            lowest = s[i].marks;
            l_index = i;
        }
    }

    printf("\nStudent: %s", s[h_index].name);
    printf("\nHighest Marks: %.2f\n", highest);

    printf("\nStudent: %s", s[l_index].name);
    printf("\nLowest Marks: %.2f", lowest);
}

int main()
{
    input();

    high_low();

    free(s); //clearing the components of Studnets array.

    getch();
    return 0;
}