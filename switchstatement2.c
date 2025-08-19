#include <stdio.h>

int main() {
    int marks, grade;

    printf("Enter marks (0 - 100): ");
    scanf("%d", &marks);

    // Validating marks range
    if (marks < 0 || marks > 100) {
        printf("Invalid marks entered. Please enter a value between 0 and 100.\n");
        return 1;
    }

    // Convert marks to grade categories using integer division
    grade = marks / 10;

    switch (grade) {
        case 10:
        case 9:
            printf("Grade: A (Excellent)\n");
            break;
        case 8:
            printf("Grade: B (Very Good)\n");
            break;
        case 7:
            printf("Grade: C (Good)\n");
            break;
        case 6:
            printf("Grade: D (Satisfactory)\n");
            break;
        case 5:
            printf("Grade: E (Needs Improvement)\n");
            break;
        default:
            printf("Grade: F (Fail)\n");
            break;
    }

    return 0;
}
