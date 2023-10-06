#include<stdio.h>

int main(void)
{
    int num1 = 0, i;
    printf("Please enter a number:");
    scanf_s("%d", &num1);

    for (i = 2; i < num1; i++) {
        if ((num1 % i) == 0) break;
    }

    if (i == num1) printf("It is a prime number.");
    else
        printf("it is not a prime number.");

}