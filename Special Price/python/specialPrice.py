# Author Name = Shubham Goswami
# Github Profile = https://github.com/shubham2704

size = 100001
n = int(raw_input())

arr = []

for i in range(0,n):
	i = int(raw_input())
	arr.append(i)

query = int(raw_input())

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
	price1 = int(raw_input())
	price2 = int(raw_input())

	if(price1>0):
		print(hash[price2]-hash[price1-1])
	else:
		print(hash[price2])
		
	query = query-1
