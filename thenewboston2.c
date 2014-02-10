#include <stdio.h>
#include <conio.h>

int main()
{
    int num1;
    int num2;
    int sum;

    printf("What is the first number? ");
    scanf("%d", &num1);

    printf("What is the second number?");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("The sum is %d", sum);
    return(0);
}
