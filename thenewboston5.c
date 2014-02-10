#include <stdio.h>
#include <conio.h>

int main()
{
    int age;
    printf("Enter your age");
    scanf("%d", &age);

    if(age==60){
        printf("Easy cougar!");
    }

    else if(age==40){
        printf("Mom?");
    }
    else if(age==21){
        printf("Call me");
    }
    else{
        printf("Jailbait!");
    }
    return(0);
}
