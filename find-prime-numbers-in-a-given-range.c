#include <stdio.h>

int main () {
	int i, j, num1, num2, flag;

	printf("Enter the range: ");
	scanf("%d %d", &num1, &num2);

	printf("Prime numbers from %d and %d are: \n", num1, num2);

	for (i=num1; i<=num2; i++){

		int flag = 0;

		for (j = 1; j <= i; j++){
			if (i%j == 0){
				flag++;
			}
		}
			if (flag == 2){
				printf("%d\n", i);
			}
	}

return 0;

}
