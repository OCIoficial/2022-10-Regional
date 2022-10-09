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
    multipliers = random.sample(range(1, 10**4+1), N)
    return [a*m for m in multipliers]

if __name__ == '__main__':
    N = read_arg(sys.argv[2], 1, 10**4) # N can't be bigger than 10**4 in this case
    a = read_arg(sys.argv[3], 1, 10**4)
    j = read_arg(sys.argv[4], 1, 10**4)

    print(N)
    print(*gen_array())
    print(a, j)
