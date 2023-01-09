mn = input()
mn = mn.split()
m = int(mn[0])
n = int(mn[1])
 
 
if m%2==0:
    output = m*n/2
else:
    output = n*(m-1)/2 + (n-n%2)/2
 
print(int(output))