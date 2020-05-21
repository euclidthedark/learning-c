#include<stdio.h>

/* This is a file that contains the basic declartion for c files */
int main () {
	int x = 4, y = 5;
	float z = 3.14;

	printf("This is how you format an integer.\n");
	printf("%d times %d is equal to %d.\n", x, y, x * y);
	printf("This is how you format a float.\n");
	printf("The approximation of pi is %0.2f.\n", z);

	return 0;
}
