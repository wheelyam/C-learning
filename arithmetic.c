#include <stdio.h>
int integer_subtract(int x, int y)
{
 int result;
 result = x - y;
 return result;
}

int integer_multiply(int x, int y)
{
 int result;
 result = x * y;
 return result;
}

float integer_divide(int x, int y)
{
 float result;
 result = x / y;
 return result;
}

int main()
{
 int subtract;
 int multiply; 
 subtract = integer_subtract(10, 4);
 multiply = integer_multiply(10, 4);
 float divide;
 divide = integer_divide(10, 4);
 printf(" The division of 10 and 4 is %f.\n", divide);
 printf("The subtraction of 4 from 10 is %d.\n", subtract);
 printf("The multiplication of 10 and 4 is %d.\n", multiply);
 return 0;
}
