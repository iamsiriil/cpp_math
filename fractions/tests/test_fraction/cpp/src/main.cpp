#include "../inc/test_fraction.hpp"
#include "../src/fractions.cpp"

int main(int argc, char **argv) {

	if (argc != 2)
		return 1;

	int test = std::atoi(argv[1]);
	switch (test) {
		case 1:
			test_initialization();
			break;
		case 2:
			test_isproper();
			break;
		case 3:
			test_isimproper();
			break;
		case 4:
			test_arithematic_add();
			break;
	}
	return 0;
}
