n, m = (int(i) for i in input().split())
birds = input().split()
baskets = input().split()

red, yellow = 0, 0
single, double = 0, 0

for b in birds:
    if b == "1":
        red += 1

for b in baskets:
    if b == "1":
        single += 1

yellow = n - red
double = m - single

# Yellow birds!!! FIRE!!!
if yellow >= double:
    single -= yellow - double
    double = 0
else:
    double -= yellow

if red >= 2 * double + single:
    print("SI")
else:
    print("NO")
