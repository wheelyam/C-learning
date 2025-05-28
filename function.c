#include <stdio.h>

int addition(int x, int y) {
int sum = x + y;
return sum;
}

int main(){
int result = addition(5,3);
printf("The sum of 5 and 3 is %d \n", result);

return 0;
}
