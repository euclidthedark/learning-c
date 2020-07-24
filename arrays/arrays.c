#include<stdio.h>

typedef enum Array_Lengths {
  ints_array_length = 5,
  hello_word_array_length = 12
} Array_Lengths;

int main()
{
  // Array of ints
  int ints[5] = { 1,2,3,4,5 };
  // Char array remeber, strings are an array of chars
  char hello_word[11] = "Hello World";
  Array_Lengths ints_length = ints_array_length;
  Array_Lengths chars_length = hello_word_array_length;

  // print the ints
  for (int i = 0; i < ints_length; i += 1)
    printf("The value at index %d is %d.\n", i, ints[i]);

  // Print the chars
  for (int i = 0; i < chars_length; i += 1)
    printf("The character value at index %d is %c.\n", i, hello_word[i]);

  return 0;
}
