/*
 * ============================================
 *   Looping in C
 *   - for loop
 *   - while loop
 *   - do-while loop
 *   - break and continue
 * ============================================
 */

#include <stdio.h>

int main() {

    /* ---------- for loop: Multiplication Table ---------- */
    int n;
    printf("Enter a number for its multiplication table: ");
    scanf("%d", &n);

    printf("\nMultiplication Table of %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    /* ---------- while loop: Sum of digits ---------- */
    int num;
    printf("\nEnter a number to find sum of its digits: ");
    scanf("%d", &num);

    int sum = 0, temp = num;
    while (temp != 0) {
        sum += temp % 10;   // add last digit
        temp /= 10;         // remove last digit
    }
    printf("Sum of digits of %d = %d\n", num, sum);

    /* ---------- do-while loop: Menu that repeats ---------- */
    int choice;
    printf("\n--- Simple Menu (do-while) ---\n");
    do {
        printf("1. Say Hello\n");
        printf("2. Say Bye\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)      printf("Hello!\n\n");
        else if (choice == 2) printf("Bye!\n\n");
        else if (choice != 3) printf("Invalid choice.\n\n");

    } while (choice != 3);   // keeps looping until user picks 3
    printf("Exited menu.\n");

    /* ---------- break and continue ---------- */
    printf("\nNumbers 1-10, skipping multiples of 3, stopping at 8:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 8) break;           // stop the loop at 8
        if (i % 3 == 0) continue;   // skip multiples of 3
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
