a = input()
b = list(a.split())
c = list(map(int,b))
temp = 0
i = 0
for j in range(len(c)):
    for i in range(len(c)-j-1):
        if (c[i] > c[i+1]):
            temp = c[i]
            c[i] = c[i+1]
            c[i+1] = temp

print(c)


#http://www.geeksforgeeks.org/bubble-sort/