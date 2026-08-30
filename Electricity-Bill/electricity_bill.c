#include <stdio.h>
#include <conio.h>

float calculate_bill(int units)
{
    float bill = 0;

    if (units <= 100)
    {
        bill = units * 1.50;
    }
    else if (units <= 200)
    {
        bill = (100 * 1.50) +
               ((units - 100) * 2.50);
    }
    else if (units <= 300)
    {
        bill = (100 * 1.50) +
               (100 * 2.50) +
               ((units - 200) * 4.00);
    }
    else
    {
        bill = (100 * 1.50) +
               (100 * 2.50) +
               (100 * 4.00) +
               ((units - 300) * 5.00);
    }

    return bill;
}

int main()
{
    int units;
    float bill;

    printf("========================================\n");
    printf("       ELECTRICITY BILL CALCULATOR      \n");
    printf("========================================\n");

    printf("\nEnter the number of units consumed: ");
    scanf("%d", &units);

    if (units < 0)
    {
        printf("\nInvalid input! Units cannot be negative.");
    }
    else
    {
        bill = calculate_bill(units);

        printf("\n----------------------------------------\n");
        printf("Units Consumed : %d\n", units);
        printf("Electricity Bill: Rs. %.2f\n", bill);
        printf("----------------------------------------\n");
    }

    getch();
    return 0;
}