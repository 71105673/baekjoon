int main(void) {
	int X, N, a, b;
	int i;
	scanf("%d\n", &X);
	scanf("%d\n", &N);
	int sum = 0;

	for (i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		sum += a * b;
	}

	if (sum == X) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	return 0;
}