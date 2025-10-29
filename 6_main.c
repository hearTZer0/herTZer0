//202510306123
//1718790056@qq.com
//王天瑞

#include<stdio.h>
 
int main()
{
   int arr[5] = {};
   int i = 0;
   int num;
 
   while (i < 5)
   {
     scanf("%d", &num);
     if (num % 2 == 0)
     {
        arr[i] = num;
        i++;
     }
     else
     {
        printf("为奇数，重新输入：");
     }
    }

   for (int n = 0;n < 5; n++)
   {
     printf("%d", arr[n]);
     if (n < 4)
     {
        printf(" ");
     }
   }
    return 0;
}
