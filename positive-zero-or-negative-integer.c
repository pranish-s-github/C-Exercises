#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("%d is a positive integer.\n",number);
    } else if (number < 0) {
        printf("%d is an negative integer.\n",number);
    } else {
    	printf("%d is equal to zero, which is neither postive nor negative.\n",number);
    }

    return 0;
}
