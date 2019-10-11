# Binary Movement

## Problem URL
[Binary Movement](https://www.hackerearth.com/challenges/college/Code-Quidditch/algorithm/dfcb3215294d418fa4c8f07130ff1a7f/)

## Problem Statement
You are given a bit array (0 and 1) of size N. Your task is to perform Q queries. In each query you have to toggle all the bits from the index L to R (L and R inclusive). After performing all the queries,  print the count of all the set bits and newly updated array.

## Constraints
1 <= N <= (10^6)
1 <= Q <= (10^6)
1 <= L,R <= (10^6)

## Input Format
The first line contains an integer N denoting the size of the array.
The Second line contains N space-separated binary numbers.
The third line contains Q denoting the number of queries.
Next, Q lines contain L and R for each ith query.

## Output Format
Print the count of all the set bits and newly updated array in the new line.

## Test Cases
6
1 0 1 1 0 1
3
1 3
4 5
2 5

## Output to test cases
3
0 0 1 1 0 1

## Explanation
After first query state of array is

0 1 0 1 0 1

After second query state of array is

0 1 0 0 1 1

After third query state of array is

0 0 1 1 0 1

## Author
[Rishab Kanojia](https://www.hackerearth.com/@rishubh4)
