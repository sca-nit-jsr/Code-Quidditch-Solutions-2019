## Author : Deepak Chauhan
## Github Profile : https://Github.com/RoyalEagle73

n = int(input())
string  = input()
q = int(input())
sum = 0
for _ in range(q):
    a,b = input().split()
    b = int(b)%(len(string))
    if(a=='l'):
        sum += b
    elif(a=='r'):
        sum -= b
sum = sum %(len(string))
if(sum>0):
    string = string[sum:]+string[0:sum]
elif(sum<0):
    string = string[-sum:] + string[0:-sum]
print(string)
