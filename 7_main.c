//202510306123
//1718790056@qq.com
//王天瑞

#include <stdio.h>

int main() {
    int arr[5];
    int i;

    printf("请输入4个学号: ");
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 4; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = 0;

    printf("更新后的提交记录: ");
    for (i = 0; i < 5; i++) {
        printf("%d", arr[i]);
        if (i < 4) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
