#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter name: ");
    // & is not required to get input as a string
    fgets(name, 20, stdin); // adds a \n char at the end of the text input

    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    double gpa;
    printf("Enter gpa: ");
    // to get input for double use %lf
    scanf("%lf", &gpa);

    // to print a double use %f
    printf("Your name is %s. Your age is %d. Your age is %f", name, age, gpa);

    return 0;
}