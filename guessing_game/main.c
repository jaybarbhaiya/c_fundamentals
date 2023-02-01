// Guessing game

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int secret_number = 5;

    printf("Guess the secret number between 1 to 10\n");
    int guessed_number = 0;
    int guess_counter = 0;
    int out_of_guesses = 0;

    while (guessed_number != secret_number)
    {
        if (guess_counter > 2)
        {
            out_of_guesses = 1;
            break;
        }
        printf("Enter number: ");
        scanf("%d", &guessed_number);
        guess_counter++;
    }

    if (out_of_guesses == 1)
    {
        printf("You Loose!\n");
    }
    else
    {
        printf("You Win!\n");
    }

    return 0;
}