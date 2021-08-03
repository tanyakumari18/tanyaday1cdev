#include <stdio.h>
  
  
int main()  
{  
    int num;  
  
    printf("Enter a positive number\n");  
    scanf("%d", &num);  
  
    printf("\nNatural numbers from 1 to %d are:\n", num);  
  
    while(num)  
    {  
        printf("%d  ", num);  
        num--;  
    }  
  
    printf("\n");  
  
    return 0;  
}  
