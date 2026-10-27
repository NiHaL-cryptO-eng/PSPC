#include <stdio.h>
int main()
{
    int a[10][10], i, j, r, c, count = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
                count++;
        }
    }
    if (count > (r * c) / 2)
        printf("The matrix is a sparse matrix");
    else
        printf("The matrix is not a sparse matrix");
    return 0;
}
