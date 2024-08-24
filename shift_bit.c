#include <stdio.h>


int main() {
    int num1, num2;
    
    printf("Enter a positive number: ");
    scanf("%d", &num1);
    
    printf("\n Enter the number of bits you want to shift it to left: ");
    scanf("%d", &num2);
    
    num1 = (num1<<num2);
    printf("\n New value after shifting the number to left side: %d", num1);
    
    return 0;
}