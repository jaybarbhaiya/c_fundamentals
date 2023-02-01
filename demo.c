#include <stdio.h>

int main()
{
    char character_name[] = "John";
    int character_age = 35;

    printf("Hello %s\n", character_name);
    printf("I like the name %s\n", character_name);
    printf("I am %d years old.\n", character_age);
    printf("But mentally I am not %d years old.\n", character_age);

    return 0;
}