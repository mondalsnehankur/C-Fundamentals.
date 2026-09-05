#include <stdio.h>
#include <stdlib.h>

struct salary
{
    int emp_id;
    char emp_name[20];
    int emp_salary;
    int basic_par;
    int allowance;
    int change_amount;
};

/*
   POINTER CONCEPT:
   p       -> points to the first structure
   p + i   -> address of the i-th structure
   s       -> local pointer receiving the address passed to the function
   s->x    -> accesses member x of the structure pointed to by s

   Therefore:
       input(p + i);

   passes the address of employee i to input().
   No new structure is created inside input().
*/

/* Function to take employee details */
void input(struct salary *s)
{
    printf("\nEnter Employee ID: ");
    scanf("%d", &s->emp_id);

    printf("Enter Employee Name: ");
    scanf("%19s", s->emp_name);

    printf("Enter Employee Salary: ");
    scanf("%d", &s->emp_salary);

    printf("Enter Basic Pay: ");
    scanf("%d", &s->basic_par);

    printf("Enter Allowance: ");
    scanf("%d", &s->allowance);
}

/* Function to calculate increment */
void calc_salary(struct salary *s, float increment)
{
    // s points to the original employee structure
    s->change_amount = (int)(s->emp_salary * increment / 100);

    // Update the original salary
    s->emp_salary = s->emp_salary + s->change_amount;
}

/* Function to display employee details */
void display(struct salary *s, float increment)
{
    printf("\n----------------------------------------");
    printf("\nEmployee ID      : %d", s->emp_id);
    printf("\nEmployee Name    : %s", s->emp_name);
    printf("\nIncrement        : %.2f%%", increment);
    printf("\nIncrement Amount : %d", s->change_amount);
    printf("\nNew Salary       : %d", s->emp_salary);
    printf("\nBasic Pay        : %d", s->basic_par);
    printf("\nAllowance        : %d", s->allowance);
    printf("\n----------------------------------------\n");
}

int main()
{
    int n;
    float increment;

    // p is a pointer to struct salary
    struct salary *p;

    printf("Enter the No. of Employees: ");
    scanf("%d", &n);

    printf("Enter the Increment Percentage: ");
    scanf("%f", &increment);

    // Allocate memory for n employee structures
    p = malloc(n * sizeof(struct salary));

    if (p == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    /* Input employee details */
    for (int i = 0; i < n; i++)
    {
        printf("\n===== Employee %d =====\n", i + 1);

        // p + i = address of the i-th employee
        input(p + i);
    }

    /* Calculate increment */
    for (int i = 0; i < n; i++)
    {
        // Pass address of the i-th employee
        calc_salary(p + i, increment);
    }

    /* Display results */
    printf("\n========== EMPLOYEE DETAILS ==========\n");

    for (int i = 0; i < n; i++)
    {
        display(p + i, increment);
    }

    // Release dynamically allocated memory
    free(p);

    return 0;
}
