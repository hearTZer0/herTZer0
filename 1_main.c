//202510306123
//1718790056@qq.com
//王天瑞

#include<stdio.h>
 
int main()
{ 
    float a = 0;
    printf("输入摄氏度：");
    scanf("%f", &a);
    float b = a * 9 / 5 + 32;
    printf("%.1f华氏度", b);
    return 0;

}
