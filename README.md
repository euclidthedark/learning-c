Learning C

This is my journey in learning c!!!

## Overview


### C Styles

* Declare constant values in preprocessor headers (macor's), or with enum types.

### Header Files

Header files are the includes for a c program. You must hard link them with the c compiler. Header files can
come from the standard library, or they can be your own/ported library or c file.

Ex.

``` c


int main ()
{
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
In addition, you must declare the types of the input variables in a functions signature.

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

Loops are an expressions that allow you to iterate over collections of data. There are for, while, do while loops.

There are short hands for loops.

Ex.

``` c
for (int i = 0; i < 10; i += 1)
	... one line of code.

while (int i < 10)
	... one line of code.
```

### Complier

The c compiler takes your code and compiles it into machine readable code. There are basic commands
to keep in mind when using it.

When compliling a file, in order to tell the preprocessor to include your header files, you must include the /P
option.

Ex.

``` sh
gcc <file>.c -P
```

This will compile the files and create another file with a <file>.i extension. From there, you can see the source code
it creates.

Also, if you want to output the compilation into an .exacutable program, you can use the -o flag.

Ex.

``` sh
gcc <file>.c -P -o <nameOfProgram>
```

*Other Options*

* To preserve comments in the code use `-C` options.
* To suppress hash line details use the `-EP` option.
* To define variables in command line, you can use the `-D<variable>` options.
* To compile without the complier version, use the `-nologo` option.
* You can also compile c files with the -c option, `gcc -nologo *.c  -c`. This will create object files.
From there, you can link them into an executable with `link *.obj -out:foo.exe`
* You can supress warning with the `-w` option.
* You can display level 4 compliler warnings with the `-w4` option.

*You can also use the preprocessor to generate code with Macros. Remember that you Macro's can cause a lot of trouble
when creating programs. The convention for creating macro's is Capialitize their spelling.
*

Example .h file
``` c
int multiply (int x, int y)
{
	return x * y;
}

#define SQUARE (x) multiply(x, x) 
```

Macros can be used to create more layers of abstaction.

You can also create conditional macro code as well.

``` c
#include 'myHeader.h' 

int main ()
{
	#if <...condition>
		...someCode
	#endif 
}
```

Furthermore, you can use macros to define values and run conditions based on compilation arguments.

``` c
#include 'myHeader.h'

#define LEVEL 2

int main ()
{
	#if LEVEL > 0 
		printf("LEVEL is 2.\n");
	#endif

	#if defined(RUNTIME)
		printf("Runtime is defined.\n");
	#endif
}
```
*Above code is compiled with*
`gcc file.c -P -ofile -DRUNTIME`

### Datatypes
*Char*

A char is a string type, and are a byte in length.

* Addional Qualifiers:
	- unsigned - are integers (i) where i >= 0, and follow the law of arithmetic modulo 2^n where (n) is the number of
	bits in the type.
	- signed - always have -128 to 127 bits *(in a twos compliment machine)*


*Int*

An integer is a real number integer, as the name suggests. Below is a list of the following addional options for
`ints`. The integer type usually reflects the natural size of integers on the host machine.

* Addional Qualifiers:
	- short - (the word int can be omitted when using this qualifier) creates an int that are at least 16 bits long.
	- long - (the word int can be omitted when using this qualifier) create an int that are at least 32 bits long. 
	- unsigned - are integers (i) where i >= 0, and follow the law of arithmetic modulo 2^n where (n) is the number of
	bits in the type.
	- signed - always have -128 to 127 bits *(in a twos compliment machine)*

*Floats*

A single precision floating number.

* Addional Qualifiers:
	- short - (the word int can be omitted when using this qualifier) creates an int that are at least 16 bits long.
	- long - (the word int can be omitted when using this qualifier) create an int that are at least 32 bits long. 

*Double*

A double precision floating number.

* Addional Qualifiers:
	- short - (the word int can be omitted when using this qualifier) creates an int that are at least 16 bits long.
	- long - (the word int can be omitted when using this qualifier) create an int that are at least 32 bits long. 


*Enums*

An enumeration is a list of constant integer values. The first name in an enum has value 0, the next 1, and so on,
unless explicit values are specified. If not all values are specified, unspecified values continue the progression
from the last specified value.

* You can declare enums with their literal definition, or by declaring them with a typedef.

Kernighan, Brian W.. C Programming Language (p. 39). Pearson Education. Kindle Edition. 

*Structs*

A structure is a collection of one or more variables, possibly of different types, grouped together under a single name
for convenient handling.

Kernighan, Brian W.. C Programming Language (p. 127). Pearson Education. Kindle Edition. 

* Remember structures can be nested.
* You can also create structs from factory functions.
* You can declare structs with their literal definition, or by declaring them with a typedef.

*Unions*

// TODO: write about unions


*Pointers and Arrays*

Pointers and Arrays are usually talked about together, as they are very similar.

**Pointers**

	- * is the dereference and refrence operator.
	- (*p)++ is how you increment pointers.
	- & is the address of operator.
