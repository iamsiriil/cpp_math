#include "../inc/fractions.hpp"
#include "../src/fractions.cpp"

int main() {
	Fraction f1 {0, 1};
	Fraction f2 {0, 1};

	std::cin >> f1;
	std::cin >> f2;

	std::cout << f1 + f2;
}
