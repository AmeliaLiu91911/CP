n = int(input())
ans = []

for i in range(n):
    word = str(input())
    if len(word) > 10:
        ans.append(word[0] + str(len(word)-2) + word[-1])
    else:
        ans.append(word)

for each in ans:
    print(each)


