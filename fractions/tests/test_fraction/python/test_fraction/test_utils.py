from fractions import Fraction
import random as rd

def manage_io(path: str, input_data: str):
    process = subprocess.Popen(
            [path],
            stdin = subprocess.PIPE,
            stdout = subprocess.PIPE,
            stderr = subprocess.PIPE,
            text = True
            )
    output, error = process.communicate(input=input_data)
    
    return Fraction(output.strip()), error

def prop_fraction(min_val: int, max_val: int):
    a = rd.randrange(min_val, max_val)
    b = rd.randrange(min_val, max_val)
    if a > b:
        den = a
        num = b
    else:
        num = a
        den = b
    return Fraction(num, den)

def improp_fraction(min_val: int, max_val: int):
    a = rd.randrange(min_val, max_val)
    b = rd.randrange(min_val, max_val)
    if a < b:
        den = a
        num = b
    else:
        num = a
        den = b
    return Fraction(num, den)

def generate_rand_fraction(ftype: str, min_val: int, max_val: int):
    match ftype:
        case "proper":
            return prop_fraction(min_val, max_val)
        case "improper":
            return improp_fraction(min_val, max_val)
        case _:
            f = rd.choice([prop_fraction, improp_fraction])
            return f(min_val, max_val)

print(generate_rand_fraction("proper", 10, 100))
print(generate_rand_fraction("improper", 10, 100))
print(generate_rand_fraction("", 10, 100))
print(generate_rand_fraction("", 10, 100))
print(generate_rand_fraction("", 10, 100))
