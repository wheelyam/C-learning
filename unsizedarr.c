#include <stdio.h>
int main()
{
 char array_ch[] = {'C', ' ',
                    'i', 's', ' ',
                    'p', 'o', 'w', 'e', 'r',
                    'f', 'u', 'l', 'l', '!', '\0'};
 int list_int[][3] = {
        1, 1, 1,
        2, 2, 8,
        3, 9, 27,
        4, 16, 64,
        5, 25, 125,
        6, 36, 215,
        7, 49, 343};

 printf("The size of array_ch[] is %ld bytes.\n", sizeof (array_ch));
 printf("The size of list_int[][3] is %ld bytes.\n", sizeof (list_int));
 return 0;
}
