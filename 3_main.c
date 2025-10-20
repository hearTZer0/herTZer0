//202510306123
//1718790056@qq.com
//王天瑞

#include<stdio.h>
 
int main()
{
    int a , b;
    char op;
    
    printf("请输入（格式:a b op)");
    scanf("%d %d %c", &a, &b, &op);
    
    if( op == '+')
    {
        printf("%d\n", a + b);
    }
    
    else if( op == '-')
    {
        printf("%d\n", a - b);
    }
    
    else if(op == '*')
    {
        printf("%d\n", a * b);
    }
    
    else if(op == '/')
    {
        if(b != 0)
        {
            double result = (double) a / b;
            printf("%.2f\n", result);
        }
        else
        {
            printf("错误:除数不能为零");
        }
    }
    
    return 0;
}
