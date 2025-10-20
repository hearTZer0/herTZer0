//202510306123
//1718790056@qq.com
//王天瑞

#include<stdio.h>
 
int main()
{
 int score;   
 
 printf("输入成绩:");
 
 scanf("%d",&score);
 
 if (score < 0 || score > 100)
 {
    printf("错误\n");
    return 1;
 }  
 
 if (score >= 90 && score <= 100) 
 {
    printf("A\n");
 }  
 
 else if (score >= 80 && score <= 89 )
 {
    printf("B\n");
 }
 
 else if (score >= 70 && score <= 79)
 {
    printf("C\n");
 }
 
 else if(score >= 60 && score <= 69)
 {
    printf("D\n");
 }
 
 else if(score < 60)
 {
    printf("E\n");
 }

 return 0;
}
