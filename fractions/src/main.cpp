#include "../inc/fractions.hpp"

int main() {
	Fraction f1 {2, 4};
	Fraction f2 {3, 5};
	Fraction f3 = f1 + f2;
	cout << f1;

	(f1.isProper()) ? cout << " Is a proper fraction\n" :
			cout << " is an improper fraction\n";
	return 0;
}

