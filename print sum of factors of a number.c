#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }
    printf("Sum of factors = %d", sum);
    return 0;
}
