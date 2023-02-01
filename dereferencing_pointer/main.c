/*
    Dereferencing a pointer means that
    we are going to the memory address and extracting the corresponding value
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 22;
    int *p_i = &i;

    printf("i's memory address: %p\n", p_i);

    printf("i's deref pointer: %d\n", *p_i);

    return 0;
}