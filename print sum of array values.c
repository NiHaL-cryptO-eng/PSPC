#include <stdio.h>
int main()
{
    int a[50], i, n, sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("Sum = %d", sum);
    return 0;
}
