// Program to calculate student grades using operators
#include <stdio.h>
int main() {
char name[50];
int english, physics, chemistry, mathematics, computer;
printf("----------------------------------------\n");
printf(" STUDENT GRADE CALCULATOR \n");
printf("----------------------------------------\n");
printf("Enter student name: ");
scanf(" %[^\n]s", name); // ← fix: reads full name with spaces
printf("Enter marks in English (out of 100): ");
scanf("%d", &english);
printf("Enter marks in Physics (out of 100): ");
scanf("%d", &physics);
printf("Enter marks in Chemistry (out of 100): ");
scanf("%d", &chemistry);
printf("Enter marks in Mathematics (out of 100): ");
scanf("%d", &mathematics);
printf("Enter marks in Computer Applications (out of 100): ");
scanf("%d", &computer);
/* --- 1. Arithmetic Operators --- */
int total = english + physics + chemistry + mathematics + computer;
int maxMarks = 5 * 100;
int average = total / 5;
float percentage = (float)total / maxMarks * 100;
/* --- 2. Relational Operators --- */
int passmark = 40;
int s1Pass = (english >= passmark);
int s2Pass = (physics >= passmark);
int s3Pass = (chemistry >= passmark);
int s4Pass = (mathematics >= passmark);
int s5Pass = (computer >= passmark);
/* --- 3. Logical Operators --- */
int allPassed = (s1Pass && s2Pass && s3Pass && s4Pass && s5Pass);
/* --- 4. Increment Operator: count passed subjects --- */
int passedCount = 0;
if (s1Pass) passedCount++;
if (s2Pass) passedCount++;
if (s3Pass) passedCount++;
if (s4Pass) passedCount++;
if (s5Pass) passedCount++;
/* --- 5. Assignment Operator --- */
int failedCount = 0;
failedCount = 5 - passedCount;
/* --- 6. Grade using if-else --- */
char *grade;
if (percentage >= 90)
grade = "A+";
else if (percentage >= 80)
grade = "A";
else if (percentage >= 70)
grade = "B";
else if (percentage >= 60)
grade = "C";
else if (percentage >= 50)
grade = "D";
else
grade = "F";
/* --- 7. sizeof Operator --- */
printf("\n----------------------------------------\n");
printf(" RESULT CARD: %s\n", name);
printf("------------------------------------------\n");
printf("English : %d\n", english);
printf("Physics : %d\n", physics);
printf("Chemistry : %d\n", chemistry);
printf("Mathematics : %d\n", mathematics);
printf("Computer Applications: %d\n", computer);
printf("----------------------------------------\n");
printf("Total : %d / %d\n", total, maxMarks);
printf("Average : %d\n", average);
printf("Remainder : %d\n", remainder);
printf("Percentage : %.2f%%\n", percentage);
printf("Grade : %s\n", grade);
printf("----------------------------------------\n");
printf("Subjects Passed : %d\n", passedCount);
printf("Subjects Failed : %d\n", failedCount);
printf("----------------------------------------\n");
if (allPassed == 1)
printf("Result : PASS\n");
else
printf("Result : FAIL\n");
}
