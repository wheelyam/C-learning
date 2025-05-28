#include <stdio.h>
int integer_add( int x, int y, int z)
{
  int sum;
  sum = x + y + z;
  return sum;
}
int main()
{
  int sum;
  sum = integer_add(1 ,2, 5);
  printf(" The addition of 1, 2 and 5 is %d.\n", sum);
  return 0;
}
