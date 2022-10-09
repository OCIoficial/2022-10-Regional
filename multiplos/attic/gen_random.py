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

def gen_array():
    return random.sample(range(1, 10**8+1), N)

if __name__ == '__main__':
    N = read_arg(sys.argv[2], 1, 10**5)
    a = read_arg(sys.argv[3], 1, 10**4)
    j = read_arg(sys.argv[4], 1, 10**4)

    print(N)
    print(*gen_array())
    print(a, j)
