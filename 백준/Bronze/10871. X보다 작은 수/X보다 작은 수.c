#include <stdio.h>

int main() {
	int N, X;
	int i;
	scanf("%d", &N);  
	int A[N];  
	scanf("%d", &X);

	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}

	for (i = 0; i < N; i++) {
		if (A[i] < X) {
			printf("%d ", A[i]);
		}
	}
	return 0;
}
