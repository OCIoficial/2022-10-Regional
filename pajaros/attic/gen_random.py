"""
Generates testcases where all the numbers
are multiples of "a"
"""
import random
import sys

random.seed(sys.argv[1])


def read_arg(arg, min_value, max_value):
    if arg == 'rand':
        return random.randint(min_value, max_value)
    else:
        return int(arg)

def gen_array(size):
    return random.choices([1,2], k=size)

if __name__ == '__main__':
    n = read_arg(sys.argv[2], 1, 5*10**5)
    m = read_arg(sys.argv[3], 1, 5*10**5)

    print(n, m)
    print(*gen_array(n))
    print(*gen_array(m))
