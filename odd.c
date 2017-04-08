#include<stdio.h>
int main()  
{  
    int counter; 
    printf("Odd numbers \n");
    counter = 1;
    while (counter <= 100) {  
        printf("%d ", counter);
        counter = counter + 2;  
    }  
  
    return 0;  
} 
