#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = 0;
    int k = 2 * n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            printf("  ");
        }
        for (int l = k; l >= 1; l--)
        {
            printf("* ");
        }
        s++;
        k = k - 2;
        printf("\n");
    }

    return 0;
}