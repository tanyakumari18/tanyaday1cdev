#include <stdio.h>
int main()
{
    int num1, num2;
    //Reading two numbers from user
    printf("Enter two numbers to find maximum number: ");
    scanf("%d%d", &num1, &num2);
    //Condition to check maximum number
    switch(num1 > num2)
    {
        case 0: printf("%d is Maximum number", num2);
            break;
        case 1: printf("%d is Maximum number", num1);
            break;
    }
    return 0;
}
