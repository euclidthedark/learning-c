#include<stdio.h>
#include "my-math.h"

int main ()
{
  printf("We are going to multiply with integers from a header file.\n");
  printf("The product of 4 and 5 is %d.\n", multiply(4 , 5));
  
  return 0;
}