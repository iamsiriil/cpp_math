#ifndef PRIME_HPP
# define PRIME_HPP

# include <iostream>
# include <vector>

using namespace std;

bool		isPrime(int n);
int		gcd(int a, int b);
int		getNextPrime(void);
vector<int>	trialDivision(int n);

#endif
