#include <stdio.h>

void decToBinary(int n) {

	if (n == 0) {
		return;
	}

	decToBinary(n / 2);
	printf("%d", n % 2);
}

int main() {
	int num;
	printf("please enter a number: ");
	scanf_s("%d", &num);

	if (num == 0) {
		printf("0");
	}
	else {
		decToBinary(num);
	}

	printf("\n");

	return 0;
}