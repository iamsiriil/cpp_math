from fractions import Fraction
import random as rd
import subprocess

def test_addition(f1: Fraction, f2: Fraction):
    return f1 + f2

def generate_fraction():
    num = 0
    den = 0
    n = rd.randrange(1, 100)
    m = rd.randrange(1, 100)
    if n > m:
        den = n
        num = m
    else:
        num = n
        den = m
    return Fraction(num, den)        

def run_test(f1: Fraction, f2: Fraction, n: int):
    input_data = f"{f1}\n{f2}"
    
    process = subprocess.Popen(
            ['./a.out'],
            stdin = subprocess.PIPE,
            stdout = subprocess.PIPE,
            stderr = subprocess.PIPE,
            text = True
            )
    output, error = process.communicate(input=input_data)
    
    f3 = Fraction(output.strip())
    result = ''
    if f3 == f1 + f2:
        result = "\033[92mPassed\033[0m"
    else:
        result = "\033[91mFailed\033[0m"

    test_result = f"Test{n} {str(f1):<6} + {str(f2):<6}: expected {str(f1 + f2):<12}: got {str(f3):<12}: {result}"
    print(test_result)

for i in range(0, 10):
    f1 = generate_fraction()
    f2 = generate_fraction()
    run_test(f1, f2, i)




