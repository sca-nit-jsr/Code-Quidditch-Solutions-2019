## Author : Deepak Chauhan
## GitHub Profile : https://Github.com/Royaleagle73 
import math
n = int(input())
for _ in range(n):
    l,r = [int(i) for i in input().split()]
    total = math.floor(math.sqrt(r)) - math.ceil(math.sqrt(l)) + 1
    if(total%2!=0):
        print("Odd")
    else:
        print("Even")
