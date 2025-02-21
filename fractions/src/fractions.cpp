#include "../inc/fractions.hpp"

Fraction::Fraction(int n = 0, int d = 1) : num(n), den(d) {
	simplify();
}

int Fraction::gcd(int a, int b) {
	a = abs(a);
	b = abs(b);
	while (b != 0) {
		int t = b;
		b = a % b;
		a = t;
	}
	return a;
}

void Fraction::simplify() {
	if (den == 0) {
		den == 1;
		num == 0;
		return ;
	}
	int g = gcd(num, den);
	num /= g;
	den /= g;
	if (den < 0) {
		num = -num;
		den = -den;
	}
}

// Addition
Fraction Fraction::operator+(const Fraction& other) const {
	int new_num = num * other.den + other.num * den;
	int new_den = den * other.den;
	return Fraction(new_num, new_den);
}

// Subtraction
Fraction Fraction::operator-(const Fraction& other) const {
	int new_num = num * other.den - other.num * den;
	int new_den = den * other.den;
	return Fraction(new_num, new_den);
}

// Multiplication
Fraction Fraction::operator*(const Fraction& other) const {
	return Fraction(num * other.num, den * other.den);
}

// Division
Fraction Fraction::operator/(const Fraction& other) const {
	if (other.num == 0) {
		return Fraction(0, 1);
	}
	return Fraction(num * other.den, den * other.num);
}

// Comparison Operations
// Equality
bool Fraction::operator==(const Fraction& other) const {
	return num == other.num && den == other.den;
}

// Inequality
bool Fraction::operator!=(const Fraction& other) const {
	return num != other.num && den != other.den;
}

// Smaller Than
bool Fraction::operator<(const Fraction& other) const {
	return num * other.den < den * other.num;
}

// Greater Than
bool Fraction::operator>(const Fraction& other) const {
	return num * other.den > den * other.num;
}

// Smaller or equal
bool Fraction::operator<=(const Fraction& other) const {
	return (num == other.num && den == other.den) || 
		(num * other.den < den * other.num);
}

// Greater or equal
bool Fraction::operator>=(const Fraction& other) const {
	return (num == other.num && den == other.den) || 
		(num * other.den > den * other.num);
}

// Output
ostream& operator<<(ostream& os, const Fraction& f) {
	os << f.num << "/" << f.den;
	return os;
}

int Fraction::numerator() const {
	return num;
}

int Fraction::denomenator() const {
	return den;
}


