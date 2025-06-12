#include <stdio.h>

void ChPrint(char *ch);
int DataAdd(int *list, int max);
int main()
{
 char str[] = "It's a string!";
 char *ptr_str;
 int list[5] = {1, 2, 3, 4, 5}
 int *ptr_int;

 ptr_str = str;
 ChPrint(ptr_str);
 ChPrint(str);

 ptr_int = list;
 printf("The sum returned by DataAdd(): %d\n",
         DataAdd(ptr_int, 5));
 printf("The sum returned by DataAdd(): %d\n",
         DataAdd(list, 5));
 return 0;
}

void ChPrint(char *ch)
{
 printf("%s\n", ch);
}

int DataAdd(int *list, int max)
{
 int i;
 int sum = 0;

 for (i=0; i<max; i++)
  sum += list[i];
 return sum;
}
