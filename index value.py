n=int(input())
arr=[int(x) for x in input().split()]
x=[]
for i in range(0,n):
    if i==arr[i]:
            x.append(i)
if len(x)>0:
    print(x)
else:
    print('-1')
