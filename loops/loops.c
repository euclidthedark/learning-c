#include<stdio.h>

/*
* This file containes examples of loops
*/

int main ()
{
	int x = 0;

	while (x < 10)
	{
		printf("We are inside the C while loop.\n");
		x += 1;
	}

	do 
	{
		printf("We are inside the C do loop.\n");
		x += 1;
	} while (x < 20);

	for (int x = 0; x < 10; x++)
		printf("We are now inside the for loops.\n");
	
	return 0;
}
