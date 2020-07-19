#include<stdio.h>

// This the literal way to declare an enum
enum Mein_Boolean { No, Yes, SuperPosition };

// This is the typedefinition way to declare an enum.
typedef enum Week_Days { Sun, Mon, Tues, Wed, Thurs, Fri, Sat } Days_In_Week;

int main()
{
  enum Mein_Boolean quantum = SuperPosition;
  Days_In_Week day = Mon;

  printf("My value is a Boolean of SuperPosition, which equals %d \n", quantum);
  printf("This is the day in the week %d \n", day);
  return 0;
}
