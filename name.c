#include <stdio.h>

int main()
{
    char name[20];
	fputs("Enter your name: ", stdout);
	fflush(stdout);
	gets(name);
	printf("Hello %s, nice to meet you. \n", name);
	return(0);
}
