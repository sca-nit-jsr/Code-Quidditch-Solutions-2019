## Author : Deepak Chauhan
## GitHub Profile : https://Github.com/Royaleagle73 

## !!!! This Solution is Not Working Right now !!!
from math import sqrt
n = int(input())
for _ in range(n):
    l,r = [int(i) for i in input().split()]
    total = int(sqrt(r)) - int(sqrt(l+1)) + 1
    if(total%2!=0):
        print("Odd")
    else:
        print("Even")
