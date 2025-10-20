//202510306123
//1718790056@qq.com
//王天瑞

#include<stdio.h>
 
int main()
{
    int a ,b ,c;

    printf("请输入(格式:3 4 5):");
    scanf("%d %d %d",&a ,&b ,&c);

    if(a + b > c && a + c > b && b + c > a)
    {
        printf("可以组成三角形");
    }
    
    else
    {
        printf("不能组成三角形");
    }

    return 0;
}
