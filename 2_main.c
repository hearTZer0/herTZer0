//202510306123
//1718790056@qq.com
//王天瑞

#include <stdio.h>

int main()
{
    int matrix[3][3];
    int i , j = 0;

    for (i = 0;i < 3; i++)
    {
        for (j = 0;j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (j = 0;j < 3; j++)
    {
        for (i = 0;i < 3; i++)
        {
            printf("%d", matrix[i][j]);
            if (i < 2)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
