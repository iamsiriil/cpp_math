#include "../inc/test_fraction.hpp"

void	test_initialization() {
	Fraction f1 {0, 1};
	cin >> f1;
	cout << f1;
}

void	test_isproper() {
	Fraction f1 {0, 1};
	cin >> f1;
	cout << f1.isProper();
}

void	test_isimproper() {
	Fraction f1 {0, 1};
	cin >> f1;
	cout << f1.isImproper();
}

void	test_arithematic_add() {
	Fraction f1 {0, 1}, f2 {0, 1};
	cin >> f1 >> f2;
	cout << f1 + f2;
}

