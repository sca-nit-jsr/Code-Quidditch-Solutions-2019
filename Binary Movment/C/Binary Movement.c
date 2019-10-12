/*Author Name: Balasubramanian R
  Github Link: https://github.com/Cyberkid2311 */
/*Ported to C by : Deepak Chauhan
  Github Profile: https://github.com/RoyalEagle73
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n + 2];
    for (int i = 1; i <= n; i++)
        scanf("%d",&arr[i]);
    int aux[n+2];//This aux array is created to store the number of changes made in the values.
    for(int i=0; i<n+2; i++)
        aux[i]=0;
    int query;
    scanf("%d",&query);
    while (query--)
    {
        int l, r;
        scanf("%d %d",&l, &r);
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
    printf("%d\n",count);        //Prints the number of 1's in the array.
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",arr[i]);    //Prints the elements of the new array.
    }
    printf("\n");

    return 0;
}
