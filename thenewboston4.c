#include <stdio.h>
#include <conio.h>

int main()
{
    int num1;
    int num2;
    printf("Enter 2 numbers");
    scanf("%d%d", &num1, &num2);

    if(num1 == num2){
        printf("They are equal");
    }

    /*if(num1 != num2){
        printf("They are different");
    }*/
    if(num1 < num2){
        printf("%d is less than %d", num1, num2);
    }
    if(num1 > num2){
        printf("%d is greater than %d", num1, num2);
    }
    return(0);
}
