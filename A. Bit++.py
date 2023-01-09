n = int(input())

count = 0
for i in range(n):
    statement = input()
    if statement == '++X' or statement == 'X++':
        count = count + 1
    else:
        count = count - 1

print(count)
