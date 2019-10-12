/*Author Name: Balasubramanian R
  Github Link: https://github.com/Cyberkid2311 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 2];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    int aux[n + 1] = {0};       //This aux array is created to store the number of changes made in the values.
    int query;
    cin >> query;
    while (query--)
    {
        int l, r;
        cin >> l >> r;
        aux[l] += 1;              //The value at index l is incremented by 1.
        if(r < n)
         aux[r + 1] -= 1;         //The value at index (r+1) is decremented by 1. 
    }
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        aux[i] += aux[i - 1];     //The cumulative sum is calculated.
    }
    for (int i = 1; i <= n; i++)
    {
        if (aux[i] & 1)           //It check whether the element at index i is odd.
        {
            arr[i] = 1 - arr[i];  //Only if the aux array element is odd,the number in original array changes.
        }
        if (arr[i] == 1)
            count++;              //Counts the number of 1's present in the array.
    }
    cout << count << endl;        //Prints the number of 1's in the array.
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";    //Prints the elements of the new array.
    }
    cout << endl;

    return 0;
}
