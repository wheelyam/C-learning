#include <stdio.h>
int main()
{
 int i, j;
 i = 10;
 j = 5 + ++i;

 printf("%d, %d\n", i, j);
 return 0;
}
