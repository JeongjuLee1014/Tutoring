#include <stdio.h>

int main(void) {
	int N;
	int sum;

	sum = 0;

	printf("Input N: ");
	scanf("%d", &N);

	for(int i = 1; i <= N; i++) {
		sum += i;
	}
	
	printf("Sum of 1 to %d: %d\n", N, sum);
}
