//202510306123
//1718790056@qq.com
//王天瑞

#include<stdio.h>
 
int main()
{
    int i = 0;
    int arr[5] = {};
    int first = 1;

    for (i = 0; i <= 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    arr[4] = arr[0] + arr[1] + arr[2] + arr[3];

    for (i = 0; i < 5; i++)
    {
        if (! first)
        {
            printf(" ");
        }
        printf("%d", arr[i]);
        first = 0;
    }
    return 0;
}
