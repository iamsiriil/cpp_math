#include "../inc/prime.hpp"

int main() {

	{
		cout << "Trial Division\n";

		vector<int> vec = trialDivision(2945);

		for (auto i : vec)
			cout << i << endl;
		cout << endl;
	}
	{
		cout << "Get Next Prime\n";

		for (int i = 0; i < 10; ++i)
			cout << getNextPrime() << endl;
		cout << endl;
	}
	return 0;
}

