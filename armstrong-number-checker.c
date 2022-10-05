#include <stdio.h>
#include <math.h>

int main () {
	int a, b, i=0, j, num, n, r=0;

	const int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	num = number;

	while (num != 0) {
		a = num%10;
		num = num/10;
		i++;
	}
	
	n = number;	

	for (j = 0; j < i; j++){
		b = n%10;
		r = r + pow(b, i);
		n=n/10;
	}

	if (number == r) {
		printf("%d is an armstrong number.\n", number);
	}

	else {
		printf("%d is not an armstrong number.\n", number);
	}	


	return 0;
}
