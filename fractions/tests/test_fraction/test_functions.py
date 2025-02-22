def test_arithmetic_add(f1: Fraction, f2: Fraction, f3: Fraction, test_n: int):
    if f3 == f1 + f2:
        result = "\033[92mPassed\033[0m"
    else:
        result = "\033[91mFailed\033[0m"
    tm1 = f"Test #{test_n}"
    tm2 = str(f1)
    tm3 = str(f2)
    tm4 = str(f3)
    tm5 = str(f1 + f2)
    test_result = f"{tm1} {tm2:<6} + {tm3:<6} : exp {tm5:<12} : got {tm4:<12} : {result}"

test_list = [(1, test_initialization),
             (2, test_isproper),
             (3, test_isimproper),
             (4, test_arithmetic_add),
             (5, test_arithmetic_sub),
             (6, test_arithmetic_mul),
             (7, test_arithmetic_div),
             (8, test_assignment),
             (9, test_assignment_add),
             (10, test_assignment_sub),
             (11, test_assignment_mul),
             (12, test_assignment_div),
             (13, test_compare_equal),
             (14, test_compare_unequal),
             (15, test_compare_lesser),
             (16, test_compare_bigger),
             (17, test_compare_lequal),
             (18, test_compare_bequal)]
