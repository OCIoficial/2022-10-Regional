n = int(input())
dislikes = sorted(int(n) for n in input().split())
a, j = [int(n) for n in input().split()]

output = a * j
for d in dislikes:
    if d <= output and d % a == 0:
        output += a
print(output)
