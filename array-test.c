#include <stdio.h>

/* function main begins program execution */
int main()
{
    int marks[10], i, n, sum = 0;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for(i = 0; i<n; ++i)
    {
            printf("Enter marks of student%d: ", i+1);
            scanf("%d", &marks[i]);
            sum += marks[i];
    }
    printf("Sum= %d", sum);
    return 0;
}
