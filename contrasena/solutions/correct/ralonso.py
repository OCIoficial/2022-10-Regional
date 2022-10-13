decrypt = {}

for i in range(26):
    uppercase = chr(65 + i)
    lowercase = chr(97 + i)
    decrypt[uppercase] = uppercase
    decrypt[lowercase] = lowercase

m, n = (int(i) for i in input().split())

for i in range(m):
    c1, c2 = input().split()
    decrypt[c1], decrypt[c2] = decrypt[c2], decrypt[c1]

for i in range(n):
    cypher = list(input())
    passwd = "".join((decrypt[c] for c in cypher))
    print(passwd)
