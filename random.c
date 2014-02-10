//Program that picks a random number. Then the viewer tries to guess the number based on the clues given.

#include <stdio.h>
#include <conio.h>


int main()
{
    int num = 0;
    int guess;
    srand(srand());
    while(num<1)
    {
        num = 1 + rand()%10;

    }
    printf("Guess what number I am thinking of, between 1 and 10 (inclusive): ");

attempt:

    scanf("%d", &guess);
    if(guess==num){
        printf("You guessed it! \n");
    }
    else if(guess<1){
        printf("Very funny. \n");

    }
    else if(guess>10){
        printf("Very funny. \n");

    }
    else if(guess>num){
        printf("Too high. \n");
        goto attempt;
    }
    else if(guess<num){
        printf("Too low. \n");
        goto attempt;
    }


    //printf("I was thinking of: %d", num); //Used for testing purposes
    getch();
    return(0);

}
