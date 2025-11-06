//202510306123
//1718790056@qq.com
//王天瑞

#include <stdio.h>

int power(int a, int b) {
    int result = 1;

    if (b == 0) {
        return 1;
    }

    for (int i = 0; i < b; i++) {
        result *= a;
    }
    
    return result;
}

int calculate_square_sum(int n) {
    int sum = 0;
    
    for (int i = 1; i <= n; i++) {
        sum += power(i, 2);
    }
    
    return sum;
}

int main() {

    int result = calculate_square_sum(5);
    printf("%d", result);
    
    return 0;
}
