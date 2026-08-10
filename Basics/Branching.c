/*
 * ============================================
 *   Branching in C
 *   - Nested if-else
 *   - Ternary operator ( ? : )
 * ============================================
 */

#include <stdio.h>

int main() {

    /* ---------- Nested if-else: Largest of 3 numbers ---------- */
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int largest;
    if (a >= b) {
        if (a >= c)
            largest = a;
        else
            largest = c;
    } else {
        if (b >= c)
            largest = b;
        else
            largest = c;
    }
    printf("Largest: %d\n", largest);

    /* ---------- Ternary operator: Even or Odd ---------- */
    int num;
    printf("\nEnter a number to check even/odd: ");
    scanf("%d", &num);

    // Ternary: condition ? value_if_true : value_if_false
    printf("%d is %s\n", num, (num % 2 == 0) ? "Even" : "Odd");

    /* ---------- Nested ternary: Positive, Negative or Zero ---------- */
    printf("%d is %s\n", num,
           (num > 0) ? "Positive" :
           (num < 0) ? "Negative" : "Zero");

    return 0;
}
