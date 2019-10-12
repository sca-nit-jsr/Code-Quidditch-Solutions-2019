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
    int aux[n + 1] = {0};
    int query;
    cin >> query;
    while (query--)
    {
        int l, r;
        cin >> l >> r;
        aux[l] += 1;
        if(r < n)
         aux[r + 1] -= 1;
    }
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        aux[i] += aux[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        if (aux[i] & 1)
        {
            arr[i] = 1 - arr[i];
        }
        if (arr[i] == 1)
            count++;
    }
    cout << count << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
