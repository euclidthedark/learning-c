#include<stdio.h>

/*
* This file includes basic function declarations.
*/

int multiply (int x, int y)
{
	return x * y;	
}

int main ()
{
	int x = 4, y = 5;

	printf("We can multiply %d and %d.\n", x, y);
	printf("The answer is %d.\n", multiply(x, y));
}
