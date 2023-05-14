#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m = n - 1;
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("  ");
        }
        for (int l = 1; l <= k; l++)
        {
            printf("* ");
        }
        m--;
        k = k + 2;
        printf("\n");
    }

    return 0;
}