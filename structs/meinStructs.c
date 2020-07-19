#include<stdio.h>

// This is defining a struct without a typedef
struct OrderedPair {
  int x;
  int y;
};

// This is defining a struct as a typedef
// Notice that this structure is also nested.
typedef struct Triangle {
  struct OrderedPair a;
  struct OrderedPair b;
  struct OrderedPair c;
} Triangle;

struct OrderedPair make_ordered_pair(int length)
{
  struct OrderedPair p1 = {0, length * 1 };

  return p1;
}

// You can also create structures with functions
// this pattern is very similar to the factory pattern

int main()
{
  struct OrderedPair p1 = { 0, 0 };
  struct OrderedPair p2 = { 0, 2 };

  Triangle t1 = { p1, p2, make_ordered_pair(2) };

  printf("This is p1 x and y %d, %d \n", p1.x, p1.y);
  printf(
    "These are the ordered pairs for the triangle (%d, %d), (%d, %d), (%d, %d) \n",
    t1.a.x, t1.a.y, t1.b.x, t1.b.y, t1.c.x, t1.c.y
  );

  return 0;
}
