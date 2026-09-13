#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    float *marks, sum = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    marks = malloc(n * sizeof(float)); // Important
    for(i = 0; i < n; i++) {
        printf("Enter marks: ");
        scanf("%f", &marks[i]);
        sum = sum + marks[i];
    }
    printf("Average = %.2f", sum / n);
    free(marks);
    return 0;
}