
n=int(input())

my_array = []
my_list=input().split()
for i in range(n):
    my_array.append(int(my_list[i]))


q=int(input())
for i in range(q):
	sum=0
	n1,n2=input().split()
	n1=int(n1)
	n2=int(n2)
	for j in range(n):
		if my_array[j]<=n2 and my_array[j]>=n1:
			sum=sum+my_array[j]
	print(sum)
    		
