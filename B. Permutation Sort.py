def count(x):
    n = len(x)
    if x == sorted(x):
        count = 0
    elif x[n-1] == n:
        count = 1
    elif x[0] == n and x[n-1] == 1:
        count = 3
    else:
        count = 2
    return count


t = int(input())
# forloop to construct 2d array that contains all the arrays to permutate
dt = [] #dt[ith array][jth datapoint of ith array]
for i in range(t):
    n = int(input())
    x = input().split()
    temp = []
    for j in range(n):
        intValue = int(x[j])
        temp.append(intValue)
    dt.append(temp)

for i in range(t):
    print(count(dt[i]))