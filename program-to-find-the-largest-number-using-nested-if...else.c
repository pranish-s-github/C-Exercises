#include <stdio.h>

int main () {
	
	double num1, num2, num3;

	printf("Enter first number: ");
	scanf("%lf", &num1);
	printf("Enter second number: ");
	scanf("%lf", &num2);
	printf("Enter third number: ");
	scanf("%lf", &num3);

	if (num1 >= num2) {
		if (num1 >= num3) {
			printf("%.2lf is the largest number.", num1);
		}

		else {
			printf("%.2lf is the largest number.", num2);
		}
	}

	else {
		if (num2 >= num3) {
			printf("%.2lf is the largest number.", num2);
		}

		else {
			printf("%.2lf is the largest number.", num3);
		}
	}

	return 0;

}
