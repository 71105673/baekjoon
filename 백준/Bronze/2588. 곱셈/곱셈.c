#include <stdio.h>

int main(void) {
	int a, b;
	int b3, b2, b1;
	scanf("%d %d", &a, &b);

	b3 = (b / 100) % 10;
	b2 = (b / 10) % 10;
	b1 = b % 10;
	
	printf("%d\n", a * b1);
	printf("%d\n", a * b2);
	printf("%d\n", a * b3);
	printf("%d\n", a * b);
}