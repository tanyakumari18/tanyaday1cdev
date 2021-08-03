#include <stdio.h>
#include <conio.h>
#include <math.h> 
 
int main() {
  float a, b, c, determinant, root1, root2, real, imag;
  printf("Enter coefficients a, b and c of quadratic equation ax^2 + bx + c = 0 \n");
  scanf("%f%f%f", &a, &b, &c);
  determinant = b*b - 4*a*c;
   
  if(determinant >= 0) {
      root1= (-b + sqrt(determinant))/(2 * a);
      root2= (-b - sqrt(determinant))/(2 * a);
      printf("Roots of %.2fx^2 + %.2fx + %.2f = 0 are \n%.2f and %.2f",
       a, b, c, root1, root2);
  } else {
    real= -b/(2*a);
    imag = sqrt(-determinant)/(2 * a);
    printf("Roots of %.2fx^2 + %.2fx + %.2f = 0 are \n%.2f+%.2fi and %.2f-%.2fi",
     a, b, c, real, imag, real, imag);
  }
   
  getch();
  return 0;
}

