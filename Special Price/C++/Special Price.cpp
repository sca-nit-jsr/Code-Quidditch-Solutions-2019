#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define size 100001

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll query;
    cin >> query;
    ll hash[size] = {0};      //Every Element is initialized to 0.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < size)      //Since the Constraint clearly states than price1 and price2 are less than 10^5
        {
            hash[arr[i]]++;     //Counting the number of times a particular element occurs in the array.
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (hash[i] > 0)
        {
            hash[i] = i * hash[i];  //The hash array saves the value of element multiplied to the number of times it occurs.
        }
    }

    for (int i = 1; i < size; i++)
    {
        hash[i] += hash[i - 1]; //Finding the cumulative sum of all the elements present in the array.
    }
    while (query--)
    {
        ll price1, price2;
        cin >> price1 >> price2;
        if(price1 > 0)
        {
          cout << hash[price2] - hash[price1 - 1] << endl;  /*Since the array contains the Cumulative Sum, 
        }                                                   this expression would provide us the result.*/
        else
        {
          cout << hash[price2] << endl;      /*If price1 is 0 or less then we only need to calculate the sum from 1 to price2,
                                               which is the Cumulative Sum of price2.*/
        }
    }

    return 0;
}
