#include <stdio.h>
int main()
{
    int n, temp, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
    }
    if (temp == sum)
        printf("%d is an Armstrong number", temp);
    else
        printf("%d is not an Armstrong number", temp);
    return 0;
}
