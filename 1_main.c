//202510306123
//1718790056@qq.com
//王天瑞

#include<stdio.h>

int main()
{
    int n = 0;
    int isPrime = 1;
    
    scanf("%d", &n);
    
    if(n <= 1 || n >= 50)
    {
        printf("错误");
        return 1;
    }

    if(n == 2)
    {
        isPrime = 1;
    }
    else
    {
        for(int i = 2; i <= n/2; i++)
        {
            if(n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime)
    {
        printf("密钥安全，密码设置成功\n");
    }
    else
    {
        printf("密钥不安全，请重新输入\n");
    }
    
    return 0;
}
