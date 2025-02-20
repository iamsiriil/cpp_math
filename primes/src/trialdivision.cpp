#include "../inc/prime.hpp"

vector<int>	trialDivision(int n) {

	vector<int> arr;

	for (int f = 2; f * f <= n;) {
		if (n % f == 0) {
			arr.push_back(f);
			n /= f;
		} else {
			f++;
		}
	}
	if (n != 1)
		arr.push_back(n);
	return arr;
}

