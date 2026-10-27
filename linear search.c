#include <stdio.h>
int main()
{
    int a[50], i, n, key, found = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("%d found at position %d", key, i + 1);
    else
        printf("%d not found", key);
    return 0;
}
