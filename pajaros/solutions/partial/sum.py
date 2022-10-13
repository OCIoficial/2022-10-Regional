n, m = (int(i) for i in input().split())
birds = sum(int(i) for i in input().split())
pigs = sum(int(i) for i in input().split())

print("SI" if birds >= pigs else "NO")
