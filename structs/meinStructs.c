#include<stdio.h>

// This is defining a struct without a typedef
struct OrderedPair {
  int x;
  int y;
};

// This is defining a struct as a typedef
typedef struct Triangle {
  struct OrderedPair a;
  struct OrderedPair b;
  struct OrderedPair c;
} Triangle;

int main()
{
  struct OrderedPair p1 = { 0, 0 };
  struct OrderedPair p2 = { 0, 2 };
  struct OrderedPair p3 = { 2, 0 };

  Triangle t1 = { p1, p2, p3 };

  printf("This is p1 x and y %d, %d \n", p1.x, p1.y);
  printf(
    "These are the ordered pairs for the triangle (%d, %d), (%d, %d), (%d, %d)",
    t1.a.x, t1.a.y, t1.b.x, t1.b.y, t1.c.x, t1.c.y
  );

  return 0;
}
