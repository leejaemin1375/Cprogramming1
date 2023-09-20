#include<stdio.h>
int main() {
    int a, b;
    int result1, result2, result3;
    printf("Input two integers: ");
    scanf("%d %d", &a, &b);
    result1 = a & b;
    result2 = a | b;
    result3 = a ^ b;
    printf("%d & %d = %d \n", a, b, result1);
    printf("%d | %d = %d \n", a, b, result2);
    printf("%d ^ %d = %d \n", a, b, result3);

    return 0;
}
