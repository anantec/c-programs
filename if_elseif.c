#include <stdio.h>

int main() {
 
int a,b;

printf("Enter the two numbers: \n");
scanf("%d\n %d", &a, &b);
 if(a==b){
     printf("The number you have entered is same or equal");
 }
 
 else if(a>b){
     printf("The  number %d is greather than %d", a,b);
 }
 
 else{
     printf("The nubmer %d is smaller than %d", a, b);
 }
    return 0;
}