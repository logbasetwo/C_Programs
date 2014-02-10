#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0;
    while (i<15){
    printf("%d\n", 1 + rand()%6);
    i++;
    }
    return(0);
}
