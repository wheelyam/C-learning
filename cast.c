#include <stdio.h>
int main()
{
 int x, y, result;
 x = 5;
 y = 7;
 result = (x * y);

 printf("The multiplication of %d and %d is: %d\n", x, y, result);
 x = ++x;
 printf("Given the value of %d its new value is %d", x);
 return 0;
}
