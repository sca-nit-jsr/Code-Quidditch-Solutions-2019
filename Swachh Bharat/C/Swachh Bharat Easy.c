/*Author Name: Balasubramanian R
  Github Link: https://github.com/Cyberkid2311 */
/*Ported to C by : Deepak Chauhan
  Github Profile: https://github.com/RoyalEagle73
*/
  
/*  It forms a series 2,8,24,64....
    which can be expressed as 1 * (2)^1, 2 * (2)^2, 3 * (2)^3,... */


#include <stdio.h>
#define ll long long 
#define mod 1000000007
int main()
{
	ll n;
        scanf("%lld",&n);
        ll arr[n+1], x = 1;
        for(int i=1; i<=n; i++)
        {
        	x = (x * 2)%mod;      //In Every step x is multiplied with 2 to reached the desired power.
                arr[i] = x;     //The desired power of 2 is saved to the array.
        }
        ll ans = 0;
        for(int i=1; i<=n; i++)
	{
 	        ans += (arr[i]*i)%mod;  /* The power of 2 previously stored in the array is multiplied with its index 
                                    and the sum is calculated. */
        }
	printf("%d",ans%mod);
	return 0;
}
