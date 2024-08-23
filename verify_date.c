#include <stdio.h>

int main() {
    int dd, mm, yy;

    printf("Enter date (DD/MM/YY format): ");
    scanf("%d/%d/%2d", &dd, &mm, &yy);

    // Convert two-digit year to four-digit year
    if (yy < 50) {
        yy += 2000;
    } else {
        yy += 1900;
    }

    // Check if date is valid
    if (mm >= 1 && mm <= 12) {
        if ((dd >= 1 && dd <= 31) && (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)) {
            printf("Date is valid.\n");
        } else if ((dd >= 1 && dd <= 30) && (mm == 4 || mm == 6 || mm == 9 || mm == 11)) {
            printf("Date is valid.\n");
        } else if ((dd >= 1 && dd <= 28) && (mm == 2)) {
            printf("Date is valid.\n");
        } else if (dd == 29 && mm == 2 && (yy % 400 == 0 || (yy % 4 == 0 && yy % 100 != 0))) {
            printf("Date is valid.\n");
        } else {
            printf("Day is invalid.\n");
        }
    } else {
        printf("Month is not valid.\n");
    }

    return 0;
}