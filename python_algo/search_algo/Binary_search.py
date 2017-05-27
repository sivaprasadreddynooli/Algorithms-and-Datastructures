a = input()
b = list(a.split())
c = list(map(int,b))
k = 0

def binarysearch(c,n1,n2,n):
    if n == c[(n1+n2)//2] :
         return (n1+n2)//2
    elif n > c[(n1+n2)//2]:
        return binarysearch(c,((n1+n2)//2),n2,n)
    else:
        return binarysearch(c,n1,((n1+n2)//2),n)

n = int(input())
p = binarysearch(c,0,len(c),n)
print(p+1)

