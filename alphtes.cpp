#include <stdio.h>
 
int main()
{
  	char ch = 'A';

	printf("\n List of Alphabets from a to z are : \n");  
  	while(ch <= 'Z')
  	{
  		printf(" %c\t", ch);
		  ch++;	
	}
  
  	return 0;
}
