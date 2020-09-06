#include <stdio.h>
main() {
	int x, num = 0;
	for (int x = 1; x <= 10000; x++) {			// 1-10000 //
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