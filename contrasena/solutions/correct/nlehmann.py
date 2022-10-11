M, N = [int(n) for n in input().split()]

dec = [i for i in range(123)]

for _ in range(M):
    c1, c2 = [ord(c) for c in input().split()]
    dec[c1], dec[c2] = dec[c2], dec[c1]

for _ in range(N):
    s = list(input())
    for i in range(len(s)):
        s[i] = chr(dec[ord(s[i])])
    print(''.join(s))
