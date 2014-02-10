/*#include <stdio.h>

int main()
{
    int forty_two;

    printf("Please enter a number: ");
    scanf("%d", &forty_two );
    printf("You entered %d", forty_two);
    getchar();
    return 0;
}*/


#include <stdio.h>

int main()
{

    int x;
    printf("Please enter a number: ");
    /* The loop goes while x < 10, and x increases by one every loop*/
    for ( x = 0; x < 10; x++ ) {
        /* Keep in mind that the loop condition checks
           the conditional statement before it loops again.
           consequently, when x equals 10 the loop breaks.
           x is updated before the condition is checked. */
        scanf("%d", &x);
        int x;
        prinf("You entered %d", x);
        getchar();
        return 0;
}

    }
