#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,num1,guess;
    top:
    srand(time(0));
    number=rand()%100+1;
    printf("This number is %d\n", number);
    do{
        printf("Guess the number between 1 to 100: ");
        scanf("%d",&guess);
        if (guess > 101)
        {
            /* code */
            printf("This is greater than 100 \n  Re-enter number");
        }
        else if (guess > number)
        {
            /* code */
            printf("Enter Lower number please... \n");
        }
        else if (guess < number){
            /* code */
            printf(" Enter Higher number please... \n");
        }
        else
        {
            /* code */
            printf("You guessed it in %d Attempt \n\n", num1);
        }
        num1++;
        
    }while (guess!=number);
    {
        /* code */
        int a;
        repeat:
        printf("   If you are playing again press --->1 \n      or     \n if you want to exit press ---> 0  \n");
        scanf("%d,%a");
        if (a==1)
        {
            /* code */
            goto top;
        }
        if (a==0)
        {
            /* code */
            exit;
        }
        else
        {
            /* code */
            printf(" Please insert a valid number \n\n");
            goto repeat;
        }
        return 0;
        
        
    }
    
}