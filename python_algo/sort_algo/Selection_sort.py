a = input()
b = list(a.split())
c = list(map(int,b))
k = 0
for i in range(len(c)):
    k = i
    for j in range(i+1,len(c)):
        if ( c[j] < c[k] ):
            k = j
    temp = c[k]
    c[k] = c[i]
    c[i] =  temp
print(c)

'''
The selection sort algorithm sorts an array by repeatedly finding the minimum element
(considering ascending order) from unsorted part and putting it at the beginning.
The algorithm maintains two subarrays in a given array.
'''
#http://www.geeksforgeeks.org/selection-sort/