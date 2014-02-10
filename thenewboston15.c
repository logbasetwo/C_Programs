#include <stdio.h>
#include<conio.h>

int main()
{
    int n;
    int matt[5]={n,18,47,21,4};
    int i;
    int total=0;

    for(i=0; i<5; i++){
        total += matt[i];
    }

    printf("The total number is %d", total);

    return(0);
}
