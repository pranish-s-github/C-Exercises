#include <stdio.h>

int main() {

    int num1, num2;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    num1 > num2 ? printf("%d\n", num1) : num1 == num2 ? printf("Both are equal to %d.\n", num1) :  printf("%d\n", num2);

    return 0;
}