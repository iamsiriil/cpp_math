#ifndef FRACTIONS_HPP
# define FRACTIONS_HPP

# include <stdexcept>
# include <iostream>
# include <cstdlib>

using namespace std;

class Fraction {
	private:
		int num;
		int den;

		static int	gcd(int a, int b);
		void		simplify();
	public:
		Fraction(int n, int d);

		Fraction operator+(const Fraction& other) const;
		Fraction operator-(const Fraction& other) const;
		Fraction operator*(const Fraction& other) const;
		Fraction operator/(const Fraction& other) const;

		/*
		 * +=
		 * -=
		 * *=
		 * /=
		 */

		bool operator==(const Fraction& other) const;
		bool operator!=(const Fraction& other) const;
		bool operator<(const Fraction& other) const;
		bool operator>(const Fraction& other) const;
		bool operator<=(const Fraction& other) const;
		bool operator>=(const Fraction& other) const;

		friend ostream& operator<<(ostream& os, const Fraction& f);

		bool 		isProper();
		bool		isImproper();
		int		numerator() const;
		int		denomenator() const;

};

#endif

