#include<stdio.h>
main() {
	int x, n = 2, i = 0;
	printf("Enter the number : ");
	scanf_s("%d", &x);
	while (x != 1) {
		if (x % n == 0) {
			while (x % n == 0) {
				if (i != 1) {
					printf("Factoring Result : ");
					i++;
				}
				printf("%d ", n);
				x = x / n;
				if (x != 1) {
					printf("x ");
				}
			}
		}
		n++;
	}
}