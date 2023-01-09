w = int(input())

def even(w): # return YES if w can be split into two even and positive intergers(may not be equal) 
    if (w>3) and (w%2 == 0):
        print('YES')
    else:
        print('NO')

even(w)
