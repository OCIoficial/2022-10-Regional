n, m = [int(n) for n in input().split()]
birds = sorted((int(n) for n in input().split()), reverse=True)
pigs = sorted((int(n) for n in input().split()), reverse=True)

i = 0
for p in pigs:
    while p > 0:
        if i < len(birds):
            p -= birds[i]
            i += 1
        else:
            print("NO")
            exit(0)
print("SI")
