#include <stdio.h>  
   
int main() {  
    int counter; 
    printf("Odd numbers between 1 to 100\n");  
   
    /* 
     * Initialize counter with first odd number 1, and increment 
     * it by 2 in every iteration. 
     */
    counter = 1;
    while (counter <= 100) {  
        printf("%d ", counter);
        /* Add 2 to current odd number 
          to get next odd number */
        counter = counter + 2;  
    }  
   
    return 0;  
} 
