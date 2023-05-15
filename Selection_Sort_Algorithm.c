#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // printf("%d %d\n", arr[i], arr[j]);

            /* for ascending order array */
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

            /* for descending order array*/
            // if (arr[i] < arr[j])
            // {
            //     temp = arr[i];
            //     arr[i] = arr[j];
            //     arr[j] = temp;
            // }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}