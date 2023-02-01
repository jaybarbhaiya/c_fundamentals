// Structs can be used to model real world entities

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;

    // stycpy copies the provided value to the char[] in the struct
    // student1.name = "student1" -> this will not work
    strcpy(student1.name, "student1");
    strcpy(student1.major, "major1");
    student1.age = 20;
    student1.gpa = 2.2;
    printf("%s", student1.name);

    return 0;
}