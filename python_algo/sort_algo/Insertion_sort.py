a = input()
b = list(a.split())
c = list(map(int,b))
temp = 0
key = 0
for i in range(1,len(c)):
    key = c[i]
    j = i-1
    while j>=0 and key < c[j]:
        c[j+1] = c[j]
        j = j-1
    c[j+1] = key

print(c)

#http://www.geeksforgeeks.org/insertion-sort/
