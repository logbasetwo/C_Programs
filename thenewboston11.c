#include <stdio.h>
#include <conio.h>

int findarea(int x, int y);


int main()
{
    int one;
    int two;
    scanf("%d%d", &one, &two);
    printf("%d", findarea(one,two));

    return(0);

}

int findarea(int x, int y)
{

    return x * y;

}

