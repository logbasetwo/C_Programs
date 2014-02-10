#include <stdio.h>

int main()
{
    int num[10] i, n, sum = 0, mean = 0, mode = 0;
    printf("Enter total of stat numbers: ");
    scanf("%d", &n);
    for(i = 0; i<n; ++i)
    {
        printf("Enter number%d: ", i+1);
        scanf("%d", &num[i]);
        sum += num[i];
        mean = sum / n;

    }
    printf("Sum= %d\n", sum);
    printf("Mean= %d", mean);
    return 0;

}
