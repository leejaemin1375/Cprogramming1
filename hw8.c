#include <stdio.h>
#include <math.h>

double calculateStandardDeviation(double arr[], int n);

int main() {
	int n = 5;
	double numbers[5];


	printf("Enter 5 real numbers:");
	for (int i = 0; i < n; ++i) {
		scanf_s("%lf", &numbers[i]);
	}

	double stdDev = calculateStandardDeviation(numbers, n);
	printf("\nStandard Deviation = %.3lf", stdDev);

	return 0;
}

double calculateStandardDeviation(double arr[], int n) {
	double mean = 0.0, variance = 0.0, stdDev = 0.0;


	for (int i = 0; i < n; ++i) {
		mean += arr[i];
	}
	mean /= n;


	for (int i = 0; i < n; ++i) {
		variance += pow(arr[i] - mean, 2);
	}
	variance /= n;

	stdDev = sqrt(variance);

	return stdDev;
}
