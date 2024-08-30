#include <stdio.h>

int main() {
 
int a,b,c;
 printf("Enter the three numbers: \n");
 scanf("%d %d %d", &a, &b, &c);
 
 if(a>b){
     if(a>c){
         printf("The nubmer %d is greater", a);
     }
     else{
         printf("The number is %d is greater", c);
     }
 }
 
 else{
     printf("The number %d is greater", b);
 }

    return 0;
}