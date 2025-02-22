from fractions import Fraction

ok = "\033[92mPassed\033[0m"
ko = "\033[91mFailed\033[0m"

def print_message(
        test_n: int,
        fin_1: Fraction,
        expect: Fraction,
        out: Fraction,
        result: str,
        fin_2: Fraction = None,
        expression: str = ""
        ):

    tst_segment = f"TEST #{str(test_n):<4} : "
    exp_segment = f"exp {str(expect):<12} : "
    got_segment = f"got {str(out):<12} : "
    res_segment = f"{result}"

    match expression:
        case "arithmetic_add":
            expression =  f"{str(fin_1):<6} +\t{str(fin_2):<6} : "
        case _:
            expression = ""

    test_result = (
            tst_segment.format(test_n=test_n) +
            expression.format(fin_1=fin_1, fin_2=fin_2) +
            exp_segment.format(expect=expect) +
            got_segment.format(out=out) + 
            res_segment.format(result=result)
            )

    print(test_result)
