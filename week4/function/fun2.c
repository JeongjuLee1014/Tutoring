#include <stdio.h>

void reverse_print(int n, int l) {
	int lastNumber;

	while(n > 0) {
		lastNumber = n % 10;
		if(lastNumber % 2 == 1) {
			printf("%d", lastNumber);
		}
		n /= 10;
	}
}

int main(void) {
	int number;
	int len;
	scanf("%d%d", &number, &len);
	reverse_print(number, len);
	putchar('\n');
	return 0;
}

