#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255];
    /*
        opens a file in the corresponding mode:
        r - read
        w - write
        a - append
    */
    FILE *fpointer = fopen("emp.txt", "r");

    fgets(line, 255, fpointer);
    printf("%s", line);

    /*
    fopen should have a corresponding fclose to close the file
    */
    fclose(fpointer);

    return 0;
}