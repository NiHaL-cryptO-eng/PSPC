#include <stdio.h>
int main()
{
    int a[50], i, n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    printf("Elements at even positions:\n");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            printf("%d ", a[i]);
    }
    printf("\nElements at odd positions:\n");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            printf("%d ", a[i]);
    }
    return 0;
}
