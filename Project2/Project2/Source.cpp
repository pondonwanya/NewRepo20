#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int num, sum=0;
    scanf_s("%d", &num);
    while (num > 0) {
        sum += num % 10;
        num /= 10;
        if (sum >= 10 && num == 0) {
            num = sum;
            sum = 0;
        }
    }
    printf("%d", sum);
    return 0;
}