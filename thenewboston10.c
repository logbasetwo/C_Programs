#include <stdio.h>
#include <conio.h>


int main()
{
    int eyes;
    int toes;

    printf("Enter number of eyes and toes");
    scanf("%d%d", &eyes, &toes);

    //if(eyes == 2 && toes ==10)
    if(eyes == 2 || toes ==10)
    {
        printf("You in the majority");
    }
    else
    {
        printf("You are in the minority");
    }
    return(0);

}
