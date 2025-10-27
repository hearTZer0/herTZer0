//202510306123
//1718790056@qq.com
//王天瑞

#include <stdio.h>

int main() 
{
    int num, hundreds, tens, units;
    int first = 1;
    num = 100;
    
    while (num <= 999) 
    {
        hundreds = num / 100;
        tens = (num / 10) % 10;
        units = num % 10;
        
        int sum = hundreds * hundreds * hundreds + tens * tens * tens + units * units * units;

        if (sum == num) 
        {
            if (!first) 
            {
                printf(" ");
            }
            printf("%d", num);
            first = 0;
        }
        num++;
    }
    return 0;
}
