import random

x, y = (int(i) for i in input().split())

for i in range(x):
    input().split()

r = random.randint(0, y)

for i in range(y):
    entry = input().split()
    if r == i:
        print(entry[0])
        exit(0)

print("IMPOSIBLE")
