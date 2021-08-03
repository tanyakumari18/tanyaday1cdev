#include <stdio.h>

int main()
{
    int arr[100]; //Declaring size of an array as 100
    int i, num, count=0;

    //Reads size and elements of array

    printf("Enter size of the array : ");
    scanf("%d", &num);

    printf("Enter elements in array : ");
    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }

    //Counts total number of negative elements
    for(i=0; i<num; i++)
    {
        if(arr[i]<0)
        {
            count++; //couting negative elements
        }
    }
    printf("\nTotal number of negative elements = %d", count);

    return 0;
}
