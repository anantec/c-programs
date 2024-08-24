#include <stdio.h>


char calculate_grade(int marks) {
    if (marks >= 90) {
        return 'A';
    } else if (marks >= 80) {
        return 'B';
    } else if (marks >= 70) {
        return 'C';
    } else if (marks >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int marks;
    printf("Enter the marks of the student: ");
    scanf("%d", &marks);

    char grade = calculate_grade(marks);
    printf("Grade: %c\n", grade);

    return 0;
}