#include <stdio.h>
#include <math.h>

double Phi;
double phi;

int fib(int n) {
	return (int)((pow(Phi, n) - pow(phi, n)) / sqrt(5));
}

int main() {
	Phi = (1 + sqrt(5)) / 2;
	phi = (1 - sqrt(5)) / 2;
	int i = 5;
	int n = 0;
	int sum = 0;
	while (n <= 4000000) {
		sum += n;
		n = fib(i);
		i += 2;
	}
	printf("Ans: %d\n", sum);
	return 0;
}