#include <stdio.h>
void  main()
{
    int i,j,n,a[100],temp,p,q,temp1;
    printf("Enter the size of array : \n") ;  //Taking size of array
    scanf("%d",&n) ;
    printf("Enter the elements : \n") ;  //Taking input from user
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    for(i=0;i<n;i++)  // loop for sorting array in ascending order
    {
        for(j=i+1;j<n;j++) { if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Ascending order of an array : \n");  //print ascending order
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]) ;
    }
    
    for(p=0;p<n;p++) // loop for sorting array in descending order
    {
        for(q=p+1;q<n;q++)
        {
            if(a[p]<a[q])
            {
                temp1=a[p];
                a[p]=a[q];
                a[q]=temp1;
            }
        }
    }
    printf("\n Descending order of an array : \n");  // print descending order
    for(p=0;p<n;p++)
    {
        printf("%d ",a[p]) ;
    }
}
