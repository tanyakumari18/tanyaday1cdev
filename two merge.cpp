#include<stdio.h>
 
int main()
{
 	int aSize, bSize, mSize, i, j, k;
	int a[10], b[10], Merged[20];
  
 	printf("\n Please Enter the First Array Size  :  ");
 	scanf("%d", &aSize);
 
 	printf("\nPlease Enter the First Array Elements :  ");
 	for(i = 0; i < aSize; i++)
  	{
      	scanf("%d", &a[i]);
  	}
  	printf("\n Please Enter the Second Array Size  :  ");
 	scanf("%d", &bSize);
   
 	printf("\nPlease Enter the Second Array Elements  :  ");
 	for(i = 0; i < bSize; i++)
  	{
      	scanf("%d", &b[i]);
  	}
  	
	mSize = aSize + bSize;
	
	i = 0;
	j = 0;
	
 	for(k = 0; k < mSize; k++)
  	{
  		if(i >= aSize || j >= bSize)
  		{
  			break;
	  	}
	  	if(a[i] < b[j])
	  	{
	  		Merged[k] = a[i];
	  		i++;
		}
		else
		{
			Merged[k] = b[j];
			j++;
		}
  	}
  	
  	while(i < aSize)
  	{
  		Merged[k] = a[i];
  		k++;
  		i++;
	}
	
  	while(j < bSize)
  	{
  		Merged[k] = b[j];
  		k++;
  		j++;
	}
	 
 	printf("\n a[%d] Array Elements After Merging \n", mSize); 
 	for(i = 0; i < mSize; i++)
  	{
    	printf(" %d \t ",Merged[i]);
  	}
 
  	return 0;
}
