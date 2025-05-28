#include <stdio.h>
int integer_add( int x, int y)
{
  int result;
  result = x + y;
  return result;
}
void print_name(){
 char name[] = "william";
 printf(" my name is %s \n", name);
 }
int main()
{
  int sum;
  sum = integer_add(7, 8);
  printf(" The addition of 7 and 8 is %d.\n", sum);
  print_name();
 
  return 0;
}
