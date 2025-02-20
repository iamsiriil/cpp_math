#include "../inc/prime.hpp"

int	getNextPrime(void) {

	static int p = 0;

	++p;
	while (isPrime(p) == false) ++p;

	return p;
}

