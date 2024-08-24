#include <stdio.h>


char calculate_grade(int marks) {
    if (marks > 85 && marks<=100) {
        return 'A';
    } else if (marks > 60 && marks <= 85) {
        printf("B+");
    } else if (marks > 40 && marks <= 60 ){
        return 'B';
    } else if (marks > 30 && marks <= 40) {
        return 'C';
    } else {
        printf("Sorry you are fail");
    }
}

int main() {
    int marks;
    printf("Enter the marks of the student: ");
    scanf("%d", &marks);

    char grade = calculate_grade(marks);
    printf("\nGrade: %c\n", grade);

    return 0;
}