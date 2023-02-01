// A pointer is just a memory address,
// just another type of data to keep it simple

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // here is a int variable
    int i = 22;
    // here we store the address of i to *p_i pointer data type
    // the data type of the variable and pointer is the same
    int *p_i = &i;

    double gpa = 3.2;
    double *p_gpa = &gpa;

    char a = 'a';
    char *a = &a;

    printf("i's memory address: %p\n", &i);

    return 0;
}