def apply_rule(password, c1, c2):
    for i in range(len(password)):
        c = password[i]
        if c == c1:
            password[i] = c2
        if c == c2:
            password[i] = c1


M, N = [int(n) for n in input().split()]

rules = [input().split() for _ in range(M)]
rules.reverse()

for _ in range(N):
    password = list(input())

    for c1, c2 in rules:
        apply_rule(password, c1, c2)

    print(''.join(password))
