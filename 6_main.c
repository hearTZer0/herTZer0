//202510306123
//1718790056@qq.com
//王天瑞

#include<stdio.h>

int csum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int cproduct(int arr[], int n)
{
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    return product;
}

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = csum(arr, 5);
    int product = cproduct(arr, 5);
    
    printf("%d %d", sum, product);
    return 0;
}
