#include <stdio.h>

int charToInt(char c) {
	return c - '0';
}

char intToChar(int n) {
	return n + '0';
}

int main(void) {
	printf("%d %c\n", charToInt('1'), intToChar(1));
}

