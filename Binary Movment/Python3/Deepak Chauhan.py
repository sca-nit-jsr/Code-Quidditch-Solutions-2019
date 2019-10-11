## Author : Deepak Chauhan
## Github Profile: https://Github.com/RoyalEagle73
n = int(input())
data = input().split()
final = [0]*(len(data)+1)
q = int(input())
for _ in range(q):
    l,r = [int(i) for i in input().split()]
    final[l-1] += 1
    final[r] -= 1

count = 0
for i in range(len(final)-1):
    if i!=0:
        final[i] += final[i-1]
    data[i] = int(data[i])
    if(final[i]%2!=0):
        data[i] = int(not(data[i]))
    if(data[i] == 1):
        count+=1

print(count)
for i in data:
    print(i, end=" ")
