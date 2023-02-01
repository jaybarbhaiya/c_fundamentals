#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        opens a file in the corresponding mode:
        r - read
        w - write
        a - append
    */
    FILE *fpointer = fopen("emp.txt", "w");

    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\n");

    /*
    fopen should have a corresponding fclose to close the file
    */
    fclose(fpointer);

    return 0;
}