#include <stdio.h>
int main()
{
    int a[10][10], i, j, n, trace = 0;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++)
        trace = trace + a[i][i];
    printf("Trace of matrix = %d", trace);
    return 0;
}
