# Learning C

This is my journey in learning c!!!


### Header Files

Header files are the includes for a c program. You must hard link them with the c compiler. Header files can
come from the standard library, or they can be your own/ported library or c file.

Ex.

``` c
#include<stdio.h>

int main () {
	return 0;
}
```


### Variables

In C, variables are variables like any other langugage... they store things. However, C is typed, so you have
to declare the type of variable you are declaring.

Ex.

``` c
int x = 4, y =5;
float z = 3.14;
```

You can also format them in i/o like so...

``` c
printf("%d.", x); /* is an int*/
printf("%0.2f, %f.", pi, pi); /* This is a float, and you can format with precision as well. */
```


### Functions

Functions are mathematical objects that take in an input and perform an action, or return an output.
You must decalre the data type they will return. If they don't return one, you must say they return void.


Ex.

``` c
void func ()
{
	...
}


int func ()
{
	return 0;
}
```


### Loops

Loops are a expressions that allow you to iterate over collections of data. There are for, while, do while loops.
