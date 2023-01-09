def conseq(array):
    for i in range(len(array)-1):
        if array[i]==array[i+1]:
            array.remove[i]

def muxii(array):
    output = 0 #whether you can remove an element or not
    if len(array)>=3:
        for i in range(len(array)-2):
            curr = array[i]
            cmp = array [i+2]
            if curr == cmp:
                array.remove(i)
                output = 1
                break



t = int(input())
n = []
s = []
for i in range(t):
    ntemp = int(input())
    sin = input().split()
    st = [int(x) for x in sin]
    s.append(st) 

  
