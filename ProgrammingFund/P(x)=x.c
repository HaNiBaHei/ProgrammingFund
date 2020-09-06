#include <stdio.h>
main() {
	int x, n, num = 0;
	scanf_s("%d", &n);
	for (int x = 1; x <= n; x++) {			// x-n //
		num = 0;								// reset 0 and continous //
		for (int fac = 1; fac < x; fac++)		// find factor of x //
			if (x % fac == 0) {					// if fac can divide x plus it all to num //
				num += fac;
			}
		if (num == x) {							// if num = x print that number //
			printf("%d ", num);

		}
	}
}