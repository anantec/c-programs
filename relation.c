#include <stdio.h>


int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    
    if(num1>=num2){
        if(num1==num2){
            printf("Result: %d=%d", num1, num2);
        }
        else{
            printf("Result: %d > %d", num1, num2);
        }
    }
    
    else{
        printf("Result: %d < %d", num1, num2);
    }
    
    return 0;
}