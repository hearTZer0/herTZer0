//202510306123
//1718790056@qq.com
//王天瑞

#include <stdio.h>

int main()
{
    int arr[10];
    int i, j, temp = 0;

    for (i = 0;i < 10;i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0;i < 9;i++)
    {
        for(j = 0;j < 9 - i;j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (i = 0;i < 10;i++)
    {
        printf("%d", arr[i]);
        if (i < 9)
        {
            printf(" ");
        }
    }
    return 0;
}
