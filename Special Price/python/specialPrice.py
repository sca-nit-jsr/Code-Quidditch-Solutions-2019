# Author Name = Shubham Goswami
# Github Profile = https://github.com/shubham2704

size = 100001
n = int(input())

arr = []

for i in range(0,n):
	i = int(input())
	arr.append(i)

query = int(input())

hash = [0]*size

for j in range(0,n):
	if(arr[j]<size):
		hash[arr[j]] = 1 + hash[arr[j]]

for k in hash:
	if (hash[k]>0):
		hash[k] = k * hash[k]

for l in hash:

	hash[l] = 1 + hash[l-1]

while query!=0:
	price1 = int(input())
	price2 = int(input())

	if(price1>0):
		print(hash[price2]-hash[price1-1])
	else:
		print(hash[price2])
		
	query = query-1
