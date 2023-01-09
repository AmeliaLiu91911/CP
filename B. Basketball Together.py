import math
nd = input().split()
n = int(nd[0])
d = int(nd[1])
 
pstr = input().split()
p = []
for i in pstr:
    p.append(int(i))
p = sorted(p, reverse = True)
 

remplayers = n
teamcount = 0

for i in p:
    reqplayers = math.ceil((d+1)/i)
    remplayers -= reqplayers
    if remplayers >= 0:
        teamcount += 1

print(teamcount)