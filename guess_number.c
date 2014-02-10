#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int r = rand(); /*This could be used to create a random number. However, I will do that later, so it does not do anything yet.*/
    int number;
    //char * p = "yesorno";
    int yesorno;


beginning:


    printf("Guess what number I am thinking of between 1-10: ");
    scanf("%d", &number);

    if(number>10){
        printf("Very funny... Would you like to try again with a number that is between 1-10? (1 for yes and 2 for no) ");
        scanf("%d", &yesorno);
            if(yesorno==1){
                goto beginning;
            }
            else{
                goto finish;
            }
    }

    switch(number){
        case 2:
            printf("You guessed it!");
            break;
        case 3:
            printf("Close, but that is not it. Try again? (1 for yes, and 2 for no) ");
            scanf("%d", &yesorno);
            if(yesorno==1){
                goto beginning;
            }
            else{
                goto finish;
            }

            break;
        case 1:
            printf("Close, but that is not it. Try again? (1 for yes, and 2 for no) ");
            scanf("%d", &yesorno);
            if(yesorno==1){
                goto beginning;
            }
            else{
                goto finish;
            }

            break;
        default:
            //char * p = "yesorno";
            printf("I am sorry, but that is not it. Try again? (1 for yes, and 2 for no) ");
            scanf("%d", &yesorno);
            if(yesorno==1){
                goto beginning;
            }
            else{
                goto finish;
            }
            finish:
            break;
    }
    return(0);
}
