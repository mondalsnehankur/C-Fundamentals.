/*
 * ============================================
 *   COMBINED PROGRAM
 *   Decision Making + Branching + Looping
 *
 *   A simple Student Report Generator:
 *   - Takes marks for multiple subjects
 *   - Uses loops to collect input
 *   - Uses if-else / switch for grading
 *   - Uses branching (ternary) for pass/fail
 *   - Prints a summary report
 * ============================================
 */

#include <stdio.h>

int main() {

    int num_subjects;
    char name[50];

    printf("=== Student Report Generator ===\n\n");
    printf("Enter student name: ");
    scanf("%s", name);

    printf("How many subjects? (1-5): ");
    scanf("%d", &num_subjects);

    // Clamp between 1 and 5
    if (num_subjects < 1 || num_subjects > 5) {
        printf("Invalid number of subjects. Defaulting to 3.\n");
        num_subjects = 3;
    }

    int marks[5];      // store marks
    int total = 0;
    int failed = 0;    // count of failed subjects

    /* ---- LOOP: Collect marks for each subject ---- */
    for (int i = 0; i < num_subjects; i++) {
        printf("Enter marks for Subject %d (0-100): ", i + 1);
        scanf("%d", &marks[i]);

        // Basic validation using if
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks! Setting to 0.\n");
            marks[i] = 0;
        }

        total += marks[i];

        // Check fail using ternary (branching)
        if (marks[i] < 40) failed++;
    }

    float average = (float)total / num_subjects;

    /* ---- DECISION: Print per-subject result ---- */
    printf("\n--- Report for %s ---\n", name);
    printf("%-12s %-8s %-6s\n", "Subject", "Marks", "Grade");
    printf("-------------------------------\n");

    for (int i = 0; i < num_subjects; i++) {
        char grade;

        // Nested if-else (Decision Making)
        if      (marks[i] >= 90) grade = 'A';
        else if (marks[i] >= 75) grade = 'B';
        else if (marks[i] >= 60) grade = 'C';
        else if (marks[i] >= 40) grade = 'D';
        else                     grade = 'F';

        printf("Subject %-4d %-8d %c\n", i + 1, marks[i], grade);
    }

    printf("-------------------------------\n");
    printf("Total   : %d\n", total);
    printf("Average : %.2f\n", average);

    // Ternary for pass/fail overall (Branching)
    printf("Result  : %s\n", (failed == 0) ? "PASS" : "FAIL");

    /* ---- SWITCH: Performance message based on average ---- */
    printf("\nPerformance Remark: ");
    int avg_int = (int)average / 10;   // 0-10 range for switch

    switch (avg_int) {
        case 10:
        case 9:  printf("Outstanding!\n");   break;
        case 8:
        case 7:  printf("Very Good!\n");     break;
        case 6:  printf("Good.\n");          break;
        case 5:
        case 4:  printf("Needs Effort.\n");  break;
        default: printf("Please work harder.\n");
    }

    /* ---- LOOP: Show failed subjects (if any) ---- */
    if (failed > 0) {
        printf("\nFailed in Subject(s): ");
        for (int i = 0; i < num_subjects; i++) {
            if (marks[i] < 40) {
                printf("Subject %d  ", i + 1);
            }
        }
        printf("\n");
    }

    printf("\n=== End of Report ===\n");
    return 0;
}
