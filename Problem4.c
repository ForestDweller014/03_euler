#include <stdio.h>
#include <math.h>

int main() {
	int a;
	int b;
	int reversed = 0;
	for (a = 999; a > 0; a--) {
		for (b = 999; b > 0; b--) {
			int product = a * b;
			int original = product;
			while (product > 0) {
				reversed = reversed * 10 + product % 10;
				product /= 10;
			}
			if (reversed == original) {
				printf("Ans: %d\n", original);
				return 0;
			}
			reversed = 0;
		}
	}
	return 0;
} 