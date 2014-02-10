#include <stdio.h>
#include <conio.h>

int main()
{
    char name[25600];
    printf("What is your name?\n");
    scanf("%s", &name);
    printf("Hello, %s", name);
    return(0);

}
