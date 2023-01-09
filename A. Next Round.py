nk = input()
nk = nk.split()
n = int(nk[0])
k = int(nk[1])

results = input()
results = results.split()

output = 0
for i in range(n):
    if int(results[i])>= int(results[k-1]) and int(results[i])>0:
        output = output + 1

print(output)


