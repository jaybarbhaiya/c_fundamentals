#include <stdio.h>
#include <stdlib.h>

int get_max(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    return num2;
}

int main()
{
    printf("%d", get_max(44, 44));
    return 0;
}