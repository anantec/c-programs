#include <stdio.h>

int main() {
    int num, first_digit, last_digit, sum;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    first_digit = num / 1000;
    
    last_digit = num % 10;
    
    sum = first_digit + last_digit;
    printf("Sum of first and last digits: %d\n", sum);
    return 0;
}