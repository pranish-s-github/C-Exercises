#include <stdio.h>

int main () {

	int num, rem, sum = 0, reverse_number;

	printf("Enter a number: ");
	scanf("%d", &num);

	while (num > 0) {
		rem = num % 10;
		sum = sum * 10 + rem;
		num = num / 10;
	}	

	reverse_number = sum;

	printf("The reverse number is %d.\n", reverse_number);

	return 0;
}
