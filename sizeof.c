#include <stdio.h>
int main()
{
 char ch = ' ';
 int int_num = 0;
 float flt_num = 0.0f;
 double dbl_num = 0.0;

 printf("The size of char is: %d-byte\n", sizeof(char));
 printf("The size of ch is: %d-byte\n", sizeof ch ); 
 printf("The size of int is: %d-byte\n", sizeof(int));
 printf("The size of int_num is: %d-byte\n", sizeof int_num);
 printf("The size of float is: %d-byte\n", sizeof(float));
 return 0;
}
