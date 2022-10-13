x, y = (int(i) for i in input().split())

attrs = {c: i for i, c in enumerate(("n", "t", "a", "d", "e", "v"))}
checks = [[] for i in range(6)]

for i in range(x):
    k, v = input().split()
    checks[attrs[k]].append(v)

ans = ""
for _ in range(y):
    entry = input().split()
    discard = False
    for i in range(6):
        if entry[i] in checks[i]:
            discard = True
            break

    if discard:
        continue

    if ans:
        print("IMPOSIBLE")
        exit(0)
    else:
        ans = entry[0]

print(ans or "IMPOSIBLE")
