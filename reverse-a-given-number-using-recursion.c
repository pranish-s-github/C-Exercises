#include <stdio.h>

int sum = 0, rem;

int reverse_function (number) {


	/* if (var) means if (var != 0) and if (!var) means if (var == 0) */
	if (number) {
		rem = number % 10;
		sum = sum * 10 + rem;
		reverse_function (number/10);
	}

	else {
		return sum;
	}

	return sum;
	
	}

int main() {
	int number, reverse_number;

	printf("Enter a number: ");
	scanf("%d", &number);

	reverse_number = reverse_function(number);
	printf("The reverse of entered number is %d.\n", reverse_number);

	return 0;
}


