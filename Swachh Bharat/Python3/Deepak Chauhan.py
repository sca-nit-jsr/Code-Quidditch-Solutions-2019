## Author : Deepak Chauhan
## Github URL : https://github.com/RoyalEagle73

def power(first, power, mod) : 
    result = 1 
    first = first % mod  
    while (power > 0) :
        if ((power & 1) == 1) : 
            result = (result * first) % mod
        power = power >> 1 
        first = (first * first) % mod
    return result

n = int(input())
sum =0
for i in range(1,n+1):
    sum += i*(power(2,i,1000000007))
print(sum%(1000000007))
