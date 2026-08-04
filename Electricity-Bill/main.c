// Program to calculate electricity bill using if-else
#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
    {
        bill = units * 2;
    }
    else if (units <= 200)
    {
        bill = (100 * 2) + ((units - 100) * 3);
    }
    else
    {
        bill = (100 * 2) + (100 * 3) + ((units - 200) * 5);
    }
    printf("Electricity Bill = ₹%.2f\n", bill);
    return 0;
}
