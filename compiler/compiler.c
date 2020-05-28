#include<stdio.h>
#include "my-math.h"

#define LEVEL 2

int main ()
{
  printf("We are going to multiply with integers from a header file.\n");
  printf("The product of 4 and 5 is %d.\n", multiply(4 , 5));
  printf("------- Macro Code---------\n");
  printf("The square of 4 is %d\n", SQUARE(4));
  #if LEVEL > 0
	printf("LEVEL is greater than 0.\n");
  #endif

  #if defined(RUNTIME)
	printf("The RUNTIME is defined.\n");
  #endif
  
  return 0;
}
