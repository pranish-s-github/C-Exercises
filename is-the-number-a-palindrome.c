#include <stdio.h>

int main() {
	int num, rev=0, number, r;

	printf("Enter a number: ");
	scanf("%d", &num);

	number = num;

	while (num != 0){
		r = num%10;
		rev = rev*10 + r;
		num = num/10;
	}

	if (rev == number){
		printf("%d is a palindrome.\n", number);
	}

	else {
		printf("%d is not a palindrome.\n", number);
	}


	return 0;
}
