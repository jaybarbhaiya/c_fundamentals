#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 22;
    char a = 'a';
    double d = 3.14;

    printf("%p\n", &i);
    printf("%p\n", &a);
    printf("%p\n", &d);

    return 0;
}