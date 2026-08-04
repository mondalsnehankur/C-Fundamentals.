// To implement the use of operators using C Programming
#include <stdio.h>
int main() {
/* --- 1. Arithmetic Operators --- */
int a, b;
printf("Enter the first num: ");
scanf("%d", &a);
printf("Enter the second num: ");
scanf("%d", &b);
printf("--- Arithmetic Operators ---\n");
printf("a = %d, b = %d\n", a, b);
printf("a + b = %d\n", a + b); // Addition
printf("a - b = %d\n", a - b); // Subtraction
printf("a * b = %d\n", a * b); // Multiplication
printf("a / b = %d\n", a / b); // Division
printf("a %% b = %d\n", a % b); // Modulus
/* --- 2. Relational Operators --- */
printf("\n--- Relational Operators ---\n");
printf("a == b : %d\n", a == b);
printf("a != b : %d\n", a != b);
printf("a > b : %d\n", a > b);
printf("a < b : %d\n", a < b);
printf("a >= b : %d\n", a >= b);
printf("a <= b : %d\n", a <= b);
/* --- 3. Logical Operators --- */
printf("\n--- Logical Operators ---\n");
int x = 1, y = 0; // 1 = true, 0 = false
printf("x = %d (true), y = %d (false)\n", x, y);
printf("x && y : %d\n", x && y);
printf("x || y : %d\n", x || y);
printf("!x : %d\n", !x);
return 0;
}

/* OUTPUT:
Enter the first num: 15
Enter the second num: 25
--- Arithmetic Operators ---
a = 15, b = 25
a + b = 40
a - b = -10
a * b = 375
a / b = 0
a % b = 15

--- Relational Operators ---
a == b : 0
a != b : 1
a > b : 0
a < b : 1
a >= b : 0
a <= b : 1

--- Logical Operators ---
x = 1 (true), y = 0 (false)
x && y : 0
x || y : 1
!x : 0


=== Code Execution Successful ===
*/
