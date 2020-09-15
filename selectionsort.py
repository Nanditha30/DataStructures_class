n=int(input())
arr=[int(x) for x in input().split()]
print("Before sorting")
print(arr)
for i in range(0,n-1):
    min=i
    for j in range(i+1,n):
        if(arr[min]>=arr[j]):
            min=j
    temp=arr[min]
    arr[min]=arr[i]
    arr[i]=temp
print("After sorting")
print(arr)
