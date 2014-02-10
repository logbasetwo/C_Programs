#include <stdio.h>

int main()
{
    char listofcharacters[50];
    int num = 8675309;

    sprintf(listofcharacters, "%d", num);
    printf("Our list of characters are: %s", listofcharacters);
    return 0;
}
