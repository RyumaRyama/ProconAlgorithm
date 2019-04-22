n = int(input())

R = []

for i in range(n):
    R.append(int(input()))

maxv = -2000000000
minv = R[0]

for i in range(1, n):
    maxv = max(maxv, R[i] - minv)
    minv = min(minv, R[i])

print(maxv)

