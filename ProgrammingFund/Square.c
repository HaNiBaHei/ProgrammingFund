#include<stdio.h>
main() {
	int x, y, n;
	printf("Enter number : ");
	scanf_s("%d", &n);
	for (x = 1; x <= n; x++) {
		if (x == 1 || x == n) {
			for (y = 1; y <= n; y++) {
				printf("*");
			}
		}
		else if (x > 1 && x < n) {
			printf("*");
			for (y = 1; y <= n - 2; y++) {
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
}