#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    const int MIN= 1;
    const int MAX=100;
    int guess;
    int guesses;
    int answers;

    srand(time(0));

    //generate a random number between MIN and MAX
    answers=(rand() % MAX) + MIN;

    do
    {
        /* code */
        printf("Enter a Guess: ");
        scanf("%d",&guess);
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
        guesses++;
        
        
    } while (guess != answers);
    printf("*************************\n");
    printf("Answer: %d\n", answers);
    printf("Guesses: %d\n", guesses);
    printf("*************************");

    return 0;
}