#include "../inc/prime.hpp"

int	gcd(int a, int b) {

	int t = 0;
	while (b != 0) {
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}

