#include<stdio.h>

typedef struct Person {
	char first_name[10];
	char last_name[10];
} Person;

/*
* This file includes basic function declarations.
* Notice that types must be declared in the function signature.
*/
int multiply (int x, int y)
{
	return x * y;	
}

// You can also pass in other types, such as structs, in functions as
// as well.
void print_persons_full_name(struct Person p)
{
	printf("The full name of the person is %s %s \n", p.first_name, p.last_name);
}

int main ()
{
	int x = 4, y = 5;
	Person waylon = { "Waylon", "Duff" };

	printf("We can multiply %d and %d.\n", x, y);
	printf("The answer is %d.\n", multiply(x, y));

	// Example of passing more advanced types in a function.
	print_persons_full_name(waylon);
	return 0;
}
