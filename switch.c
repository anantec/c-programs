#include <stdio.h>

int main() {
 
int a;
 printf("Enter the numbers between 1 to 3: \n");
 scanf("%d", &a);
 
 switch(a){
     case 1:
         printf("Had a good day!");
         break;
         
     case 2:
        printf("You had a beautiful day!");
        break;
        
     case 3:
        printf("You are handsome!");
        break;
        
     default:
        printf("Enter the number between 1 and 3");
 }

    return 0;
}