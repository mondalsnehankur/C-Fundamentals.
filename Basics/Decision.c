/*
 * ============================================
 *   Decision Making in C
 *   - if / else if / else
 *   - switch-case
 * ============================================
 */

#include <stdio.h>

int main() {

    /* ---------- if / else if / else ---------- */
    int marks;
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade: A  (Excellent!)\n");
    } else if (marks >= 75) {
        printf("Grade: B  (Good)\n");
    } else if (marks >= 60) {
        printf("Grade: C  (Average)\n");
    } else if (marks >= 40) {
        printf("Grade: D  (Below Average)\n");
    } else {
        printf("Grade: F  (Fail)\n");
    }

    /* ---------- switch-case ---------- */
    int day;
    printf("\nEnter a day number (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1: printf("Monday\n");    break;
        case 2: printf("Tuesday\n");   break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n");  break;
        case 5: printf("Friday\n");    break;
        case 6: printf("Saturday\n");  break;
        case 7: printf("Sunday\n");    break;
        default: printf("Invalid day! Enter 1-7.\n");
    }

    return 0;
}
