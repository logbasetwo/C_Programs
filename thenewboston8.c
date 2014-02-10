#include <stdio.h>
#include <conio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    switch(number){
        case 2:
            printf("You entered 2.");
            break;
        case 4:
            printf("You entered 4.");
            break;
        case 6:
            printf("You entered 6.");
            break;
        default:
            printf("I don't know what you entered.");
            break;
    }
    return(0);
}
