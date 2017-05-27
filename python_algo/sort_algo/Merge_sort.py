a = input()
b = list(a.split())
c = list(map(int,b))
k = 0
def mrgst(c):
    if len(c)/2 is 0:
        mrgst(c[0:((len(c)/2)-1)])
        mrgst(c[len(c)/2:len(c)])
        merge(c[0:((len(c)/2)-1)],c[len(c)/2:len(c)])

def merge(c1,c2):
    x = 0
    y = 0
    for i in range(len(c1)):
        if c1[i] <


