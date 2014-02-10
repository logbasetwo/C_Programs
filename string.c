#include <stdio.h>

int main()
{
    char *p;
    printf("Type your full name: \n");
    scanf ("%[^\n]%*c");
    printf("%s");
    return(0);
}
