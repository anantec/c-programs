#include <stdio.h>

int main() {
 
int age;
 
printf("Enter the age\n");
scanf("%d", &age);

if(age>=18){
    printf("You are eligible for the voting");
}

else{
    printf("The legal age for voting is 18");
}
    return 0;
}