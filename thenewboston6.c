#include <stdio.h>
#include <conio.h>

/* This program takes the number of hotdogs eaten a day in a competition and tells you what the total is and the average per day. */
int main()
{
    int loopcount;
    int hotdogs;
    int total;
    int average;
    total = 0;
    loopcount = 0;
    while(loopcount<5){
        printf("Enter a number of how many hotdogs ate: ");
        scanf("%d", &hotdogs);
        total = total + hotdogs;
        loopcount++;
        // this is basically doing this: loopcount = loopcount + 1;

    }
        average = total/5;
        printf("The total number of hotdogs was %d\n", total);
        printf("The average number of hotdogs was %d", average);
    return(0);
}
