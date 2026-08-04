#include <stdio.h>

int main()
{
    int n, i = 1;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        factorial = 1;
    }
    else
    {
        do
        {
            factorial = factorial * i;
            i++;
        }
        while (i <= n);
    }

    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}
