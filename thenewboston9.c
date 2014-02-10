#include <stdio.h>
#include <conio.h>

/* Counts from counter number to 10, with the do command. (Without the do command, there would be an error with a number
greater than 10. */

int main()
{
    int counter = 12;

    do{
        printf("%d", counter);
        counter++;
        // This is counter = counter + 1
    }
    while(counter < 10);
    return(0);

}
