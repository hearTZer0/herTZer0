//202510306123
//1718790056@qq.com
//王天瑞

#include<stdio.h>

void rearr(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

int main()
{
    int arr[5];
    for (int i = 0;i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    rearr(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
        if (i < 4)
        {
            printf(" ");
        }
    }
    return 0;
}
