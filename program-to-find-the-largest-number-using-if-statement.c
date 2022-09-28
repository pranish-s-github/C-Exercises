#include <stdio.h>

int main () {

	double num1, num2, num3;

	printf("Enter first number: ");
	scanf("%lf", &num1);
	printf("Enter second number: ");
	scanf("%lf", &num2);
	printf("Enter third number: ");
	scanf("%lf", &num3);
	
	if (num1 >= num2 && num1 >= num3) {
		printf("%lf is the largest number.\n", num1);
	}

	if (num2 >= num1 && num2 >= num3) {
		printf("%lf is the largest number.\n", num2);
	}

	if (num3 >= num1 && num3 >= num2) {
	printf("%lf is the largest number.\n", num3);
	}



	return 0;
}
