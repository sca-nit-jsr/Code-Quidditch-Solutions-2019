/*Author Name: Balasubramanian R
  Github Link: https://github.com/Cyberkid2311 */
/*Ported to C by : Deepak Chauhan
  Github Profile: https://github.com/RoyalEagle73
*/

/* The main aim of this program is to find the Number of turns made at the end
   and not during the process. So We count the number of Rotations made at the End 
   and print the string accordingly */
   
#include<stdio.h>
#include<string.h>
int main() {
    int n;
    scanf("%d",&n);
    char s[1000000];
    scanf("%s",s);
    int q;
    scanf("%d",&q);
    long c = 0;
    while(q--) {
        char t;
        int l;
        scanf("%c %d",&t,&l);
        if (t == 'l') 
        {
            c += l;      //If the string is rotated left side then the count is increased by l
        }
        else 
        {
            c -= l;      //If the string is rotated right side,then the count is decreased by l
        }
    }
    if (c >= 0) 
    {
        c %= strlen(s);    /*When the count reached the value of the size, 
                            then the string becomes the same as original string
                            so we use the modulus function and fix the value of c */
    }
    else 
    {
        c = -c;          /* If the sum of values of right dominates the sum of values of left,
                            the value of c becomes negative. So we make it positive for easy accessibility */
        
        c = strlen(s) - (c % strlen(s));  /* We reduce the value of c from Size*/
        
        c %= strlen(s);
    }
    
    // printf("%s",s.substr(c, strlen(s) - c));
    substr(&s,c+1,strlen(s)-c);
    substr(&s,0,c);
    // printf("\n");
    // printf("%s\n",s.substr(0, c));    
    
}

void substr(char *st, int beg, int last){
    // printf("%d %d\n", beg,last);
    for(int i=beg; i<=last; i++)
        printf("%c", st[i]);
}

// ---TEAM SCA---
