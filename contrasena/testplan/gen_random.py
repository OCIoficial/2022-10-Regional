"""
Generates testcases where all the numbers
are multiples of "a"
"""
import random
import sys
from string import ascii_lowercase, ascii_uppercase

random.seed(sys.argv[1])

ALPHABET = ascii_lowercase + ascii_uppercase


def read_arg(arg, min_value, max_value):
    if arg == 'rand':
        return random.randint(min_value, max_value)
    else:
        return int(arg)

def random_string():
    return ''.join(random.choices(ALPHABET, k=random.randint(1,100)))

if __name__ == '__main__':
    M = read_arg(sys.argv[2], 1, 10**4)
    N = read_arg(sys.argv[3], 1, 10**3)

    print(M, N)

    if len(sys.argv) ==  5 and sys.argv[4] == 'st2': # st2
        rules = random.sample(ALPHABET, 2*M) # notice that M can't be too big
    else:
        rules = random.choices(ALPHABET, k=2*M)
    for i in range(0, len(rules), 2):
        print(rules[i], rules[i+1])
    for i in range(N):
        print(random_string())
