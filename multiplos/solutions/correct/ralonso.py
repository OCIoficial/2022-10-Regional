n = int(input())

undesirables = sorted(int(i) for i in input().split())
p = 0

a, j = (int(i) for i in input().split())

v = 0
for i in range(j):
    while True:
        v += a
        while p < len(undesirables) and undesirables[p] < v:
            p += 1
        if p == len(undesirables):
            print(v + a * (j - i - 1))
            exit(0)
        if undesirables[p] != v:
            break

print(v)
