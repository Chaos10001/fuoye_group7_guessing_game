#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guessCount = 0;
    int guessLimit = 100;
    int OutOfGuesses = 0;
    int answers;

    srand(time(0));

    // generate a random number between MIN and MAX
    answers = (rand() % MAX) + MIN;

    do
    {
        /* code */
        if (guessCount < guessLimit)
        {
            /* code */
            printf("Enter a number: ");
            scanf("%d", &guess);
            if (guess > answers)
            {
                /* code */
                printf("Too high!\n");
            }
            else if (guess < answers)
            {
                /* code */
                printf("Too Low!\n");
            }
            else
            {
                /* code */
                printf("Correct!\n");
            }
            guessCount++;
        }
        else
        {
            /* code */
            OutOfGuesses = 1;
        }
    } while (guess != answers && OutOfGuesses == 0);
    if (OutOfGuesses == 1)
    {
        /* code */
        printf("Out Of Guesses");
    }
    else
    {
        /* code */
        printf("You Win!");
    }
    return 0;
}
