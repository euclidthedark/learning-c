#include<stdio.h>

int main()
{
  // declaring a variable and then a pointer by address of
  int x = 1;
  int y = 2;
  int *px = &x;

  // When dereferencing *px, %d is used because it will return
  // the value located in memory, which is an int.
  printf("The value of *px is %d.\n", *px);  
  return 0;
}