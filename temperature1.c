#include <stdio.h> //Standard Input Output file. <conio.h> creates parentheses error. (Over use of parentheses)

//Program that converts celsius to fahrenheit or the other direction. Then it prints that number in kelvin.

int fahrenheit(int f);
int celsius(int c);
int kelvin(int x);
int kelvinf(int y);

int main()
{
    char type;
    int temp;

    printf("Do you have a celsius or fahrenheit number? (Press c for celsius and f for fahrenheit.): ");
    scanf("%c", &type);

    switch(type){
    case 'c':
        printf("Enter temperature value: ");
        scanf("%d", &temp);
        printf("In Fahrenheit: ");
        printf("%d \n", celsius(temp));
        printf("In Kelvin: ");
        printf("%d \n", kelvin(temp));
        break;

    case 'f':
        printf("Enter temperature value: ");
        scanf("%d", &temp);
        printf("In Celsius: ");
        printf("%d \n", fahrenheit(temp));
        printf("In Kelvin: ");
        printf("%d \n", kelvinf(temp));
        break;

    default:
        printf("That was not one of the options. \n");
        break;
    }

    return(0);

}

int fahrenheit(int f)
{
    return (f - 32)*5/9;
}

int celsius(int c)
{
    return c * 9 / 5 + 32;

}
int kelvin(int x)
{
    return x + 274;
}

int kelvinf(int y)
{
    return (y - 32)*5/9 + 274;

}
