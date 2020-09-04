#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("Enter your number to power 2:");
    scanf("%d", &num);
    for (int i = 1; pow(num, 2) >= i; i++)
    {
        while (num <= pow(num, 2)) {
            printf("%.0f\n", pow(num, 2));
            break;
        }

    }
    return 0;
}