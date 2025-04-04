#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i;
	scanf("%d", &n);  

	int* A = (int*)malloc(n * sizeof(int));

	for (i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}

	int max = A[0];
	int min = A[0];

	for (int i = 1; i < n; i++) {
		if (A[i] < min) {
			min = A[i];  
		}
		if (A[i] > max) {
			max = A[i];  
		}
	}

	printf("%d %d\n", min, max);

	return 0;
}