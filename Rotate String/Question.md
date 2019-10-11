# Rotate String

## Problem URL
[Rotate String](https://www.hackerearth.com/challenges/college/Code-Quidditch/algorithm/4e4b61ed72e04e88aa9824c0e774e62f/)

## Problem Statement
You are given a string and a number of queries to perform. For each query you have to rotate the string either left or right. For example, if the string is abcde, rotating left by 1 character will give bcdea. Now rotating again right by 1 character will give abcde back.

Find the resultant string after performing all the queries.
## Constraints
1 <= N,Q,K <= (10^6)

## Input Format
The first line of input contains N denoting the size of the string.
The second contains the string of size N
Third  line contains Q denoting the number of queries. Each of the next Q lines contains one query.
Each query consists of a single character which can either be l or r  followed by a number k. If the character is l, then you have to rotate the string left by k characters, and if it is r, then you have to rotate the string right by k characters.

## Output Format
Print the resultant string after performing all the queries.

## Test Cases
5
abcde
3
l 1
l 1
r 1

## Output to test cases
bcdea

## Explanation
The input string is abcde

After the first query:  bcdea

After the second query: cdeab

After the third query: bcdea

## Author
[Ankit Saini](https://www.hackerearth.com/@ankit2233)
