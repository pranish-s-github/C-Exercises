#include <stdio.h>

int main() {
	int range1, range2, num, rev, number, r;

	printf("Enter a number range: ");
	scanf("%d %d", &range1, &range2);

	for (number = range1; number <= range2; number++) {

		num = number;
		rev = 0;

		while (num != 0){
			r = num%10;
			rev = rev*10 + r;
			num = num/10;
		}

		if (rev == number){
			printf("\n%d is a palindrome.\n", number);
		}

	}
	return 0;
}
