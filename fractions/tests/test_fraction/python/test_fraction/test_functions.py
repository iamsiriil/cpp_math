from fractions import Fraction
from print_message import *

def test_initialization(fin_1: Fraction, fout: Fraction, test_n: int):
    return
    
def test_isproper(fin_1: Fraction, out: int, test_n: int):
    return

def test_isimproper(fin_1: Fraction, out: int, test_n: int):
    return

def test_arithmetic_add(fin_1: Fraction, fin_2: Fraction, out: Fraction, test_n: int):
    exp = fin_1 + fin_2

    if out == fin_1 + fin_2:
        result = ok
    else:
        result = ko
    
    print_message(test_n, fin_1, exp, out, result, fin_2, "arithmetic_add")

#test_list = [(1, test_initialization),
#             (2, test_isproper),
#             (3, test_isimproper),
#             (4, test_arithmetic_add),
#             (5, test_arithmetic_sub),
#             (6, test_arithmetic_mul),
#             (7, test_arithmetic_div),
#             (8, test_assignment),
#             (9, test_assignment_add),
#             (10, test_assignment_sub),
#             (11, test_assignment_mul),
#             (12, test_assignment_div),
#             (13, test_compare_equal),
#             (14, test_compare_unequal),
#             (15, test_compare_lesser),
#             (16, test_compare_bigger),
#             (17, test_compare_lequal),
#             (18, test_compare_bequal)]

#fin_1 = Fraction(1, 5)
#fin_2 = Fraction(5, 8)
#out = fin_1 - fin_2
#
#test_arithmetic_add(fin_1, fin_2, out, 1)
