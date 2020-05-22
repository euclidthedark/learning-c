# Learning C

This is my journey in learning c!!!

## Overview

### Header Files

Header files are the includes for a c program. You must hard link them with the c compiler. Header files can
come from the standard library, or they can be your own/ported library or c file.

Ex.

``` c


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

### Complier

The c compiler is what takes your code and compiles it into machine readable code. There are a couple of basic commands
to keep in mind when using it.

When compliling a file, in order to tell the preprocessor to include your header files, you must include the /P options.

Ex.

``` sh
gcc <file>.c -p
```

This will compile the files and create another file with a <file>.i extension. From there, you can see the source code it creates.

Also, if you want to output the compilation into an .exacutable program, you can use the -o flag.

Ex.

``` sh
gcc <file>.c -p -o <nameOfProgram>
```

*Other Options*

To preserve comments in the code use `-c` options.
To suppress hash line details use the -`EP` option
