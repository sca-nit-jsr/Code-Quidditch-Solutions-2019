## Author : Deepak Chauhan
## GitHub Profile : https://Github.com/royaleagle73

'''
This program asks for the sum of entries between a given range. For more visit Question.md file
Solution:
1) We'll take only those entries which are less than 10^5 as range is limited to 10^5 only.
2) So we'll make a hash table for entries and take 'data[i]' as key and add the same for all indexes 'i' od data.
3) Afterwards, we'll do cummulative sum of hash table
4) Now we'll take the ranges and all we have to print is the hash[right]-hash[left-1] only. 
'''

## Taking size of array
n = int(input())

## Reading Data
data = [int(i) for i in input().split()]

## Taking a hash stable of size 10^5 and initialise array with 0
hash = [0]*(100001)

## Adding data[i] at index data[i] in hash table for all index 'i' of data
for i in range(n):
    if data[i]<=(10**5):
        hash[data[i]] += data[i]

## Making a cummulative table for the hash table
for i in range(1,len(hash)):
    hash[i] += hash[i-1]

## Asking user for number of queries
q = int(input())

## Taking all queries where b is the right range and a is left range
for _ in range(q):
    a,b = [int(i) for i in input().split()]
    if(a==0):											## If left range is 0, we'll print only hash[b]
        print(hash[b])
    else:
        print(hash[b]-hash[a-1])