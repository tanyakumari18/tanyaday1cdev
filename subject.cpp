#include <stdio.h>
 
int main(void) {
  int physics,chemistry,biology,maths,computer;
  int per;
 
  printf("Enter marks of first subject : ");
  scanf("%d",&physics);
  printf("\nEnter marks of second subject : ");
  scanf("%d",&chemistry);
  printf("\nEnter marks of third subject : ");
  scanf("%d",&biology);
  printf("\nEnter marks of fourth subject : ");
  scanf("%d",&maths);
  printf("\nEnter marks of fifth subject : ");
  scanf("%d",&computer);
 
  per = (physics+chemistry+biology+maths+computer)/5;
 
  printf("\nYou got %d %% marks and ",per);
 
  if(per>100){
    printf("Invalid marks assigned");
  }else if(per>=90 && per<=100){
    printf("Your grade is A");
  }else if(per>=80 && per<90){
    printf("Your grade is B");
  }else if(per>=70 && per<80){
    printf("Your grade is C");
  }else if(per>=60 && per<70){
    printf("Your grade is D");
  }else if(per>=40 && per<60){
    printf("Your grade is E");
  }else{
    printf("Your grade is F");
  }
 
  return 0;
}
