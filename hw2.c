#include<stdio.h>
int main(void)
{
    float num1;
    double result;

    printf("Please enter kilometers:");
    scanf_s("%f", &num1);
    result = num1 / 1.609;
    printf("%.1f km is equal to %.1f miles", num1, result);
    return 0;
}