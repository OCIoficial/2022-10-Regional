"""
Generates testcases where there is a rule for
each lokomon that is not the answer, allowing to 
discard min(X, Y-1).
"""
import random
import sys
import copy
from string import ascii_lowercase, ascii_uppercase

random.seed(sys.argv[1])

ALPHABET = ascii_lowercase
attr_chars = "ntadev"

def read_arg(arg, min_value, max_value):
    if arg == 'rand':
        return random.randint(min_value, max_value)
    else:
        return int(arg)

def random_string(length=20):
    return ''.join(random.choices(ALPHABET, k=length))

def random_lokomon():
    return [
            random_string(), # name
            random_string(), # type
            random.randint(1, 10**6), # attack
            random.randint(1, 10**6), # defense
            random.randint(1, 10**6), # evasion
            random.randint(1, 10**6)] # health

if __name__ == '__main__':
    X = read_arg(sys.argv[2], 1, 10**5)
    Y = read_arg(sys.argv[3], 1, 100)

    answer = random_lokomon()
    
    other_lokomons = [random_lokomon() for _ in range(Y-1)]
    
    all_lokomons = copy.deepcopy(other_lokomons)
    all_lokomons.append(answer)
    random.shuffle(all_lokomons)

    print(X, Y)
    
    rules = []
    # Create rules for random attribute over all lokomons in other_lokomons
    for lok in other_lokomons:
        idx = random.randint(0, 5)
        rules.append((attr_chars[idx], lok[idx]))

    # Fill with random rules
    while len(rules) < X:
        idx = random.randint(0, 5)
        rules.append((attr_chars[idx], random_lokomon()[idx]))

    random.shuffle(rules)

    for i in range(min(X, len(rules))):
        print(*rules[i])

    for x in all_lokomons:
        print(*x)

