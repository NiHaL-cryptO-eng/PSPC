#include <stdio.h>
int main()
{
    int a[50], i, n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Size of array = %d\n", n);
    printf("Reverse order:\n");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);
    return 0;
}
