n = int(input())
sum = 0
for i in range(n):
    inp = input()
    a = int(inp[0])
    b = int(inp[2])
    c = int(inp[-1])
    if a+b+c > 1:
        sum = sum+1


print(sum)
    