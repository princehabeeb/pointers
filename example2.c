#include <stdio.h>

int main(void)
{
    int myNum = 12;
    int *ptr = &myNum;

    printf("%p", ptr);
}