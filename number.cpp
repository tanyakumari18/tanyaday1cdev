#include <stdio.h>  
   
int main() {  
    int counter, N;  
    /* 
     * Take a positive number as input form user 
     */ 
    printf("Enter a Positive Number\n");  
    scanf("%d", &N);  
   
    printf("Printing Numbers form 1 to %d\n", N);  
    /* 
     * Initialize the value of counter to 1 and keep on 
     * incrementing it's value inside while loop body 
     * in every iteration 
     */
    counter = 1;
    while(counter <= N) {  
        printf("%d \n", counter);  
        counter++;
    }
     
    return 0;  
} 

