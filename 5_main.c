//202510306123
//1718790056@qq.com
//王天瑞

#include<stdio.h>

int assum(int a1, int an, int step)
{
    int n = (an - a1)/step + 1;
    int sum = (a1 + an) * n / 2;
    return sum;
}

int main()
{
    int result = assum(1, 100, 1);
    printf("%d", result);
    return 0;
}
