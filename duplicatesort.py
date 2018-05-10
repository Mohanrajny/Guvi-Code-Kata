n=int(input())
arr=[int(x) for x in input().split()]
dup=[]
for i in range(0,len(arr)):
    for j in range(i+1,len(arr)):
        if(arr[i]==arr[j]):
            if arr[i] not in dup:
                dup.append(arr[i])
for i in range(0,len(dup)):
    for j in range(i+1,len(dup)):
        if(dup[i]>dup[j]):
            dup[i],dup[j]=dup[j],dup[i]

print(dup)
