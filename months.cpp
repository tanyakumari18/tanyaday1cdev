#include <stdio.h>

int main()
{
  int month;
  printf(" Please Enter the Month Number 1 to 12 (Consider 1 = January, and 12 = December) :  ");
  scanf("%d", &month);
  
  switch(month )
  {
  	case 1:
  	case 3:
	case 5: 	
	case 7:
	case 8:
	case 10:
	case 12:			  	
	  	printf("\n 31 Days in this Month");
	  	break;
	
	case 4:	
	case 6:
	case 9:
	case 11:			    	
	  	printf("\n 30 Days in this Month");  
		break;
	
	case 2:
	  	printf("\n Either 28 or 29 Days in this Month");  
	
	default:		  	
	    printf("\n Please enter Valid Number between 1 to 12");
  }
  return 0;
}
