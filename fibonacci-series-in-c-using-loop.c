//only accurate upto 1476

#include <stdio.h>

int main () {
	double count, num1 = 0, num2 = 1, nextNum, i;

	printf("Enter the number of terms: ");
	scanf("%lf", &count);

	for (i = 0; i < count; i++) {
		if (i < 1){
			nextNum = 0;
		}

		else {
			nextNum = num1 + num2;
			num1 = num2;
			num2 = nextNum;
		}

		printf(" %lf \n\n", nextNum);
	}

	return 0;
}
