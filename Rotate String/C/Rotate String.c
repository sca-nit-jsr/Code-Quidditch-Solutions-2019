// Author: Kapil (MCA 2k19-NIT JSR)

/* The main aim of this program is to find the Number of turns made at the end
   and not during the process. So We count the number of Rotations made at the End 
   and print the string accordingly */

#include <stdio.h>
int main() 
{ 
	int n;
	scanf("%d",&n);
	char ch[n],d;
	scanf("%s",ch);
	int t,m,c=0;
	scanf("%d",&t);
	while(t--)
	{
	    scanf(" %c%d",&d,&m);
	    if(d=='l')
	    c+=m;
	    else
	    c-=m;
	}
	
	c=c%n;
	if(c>0)
	{
	    for(int i=0;i<n;i++)
	    {
		 printf("%c",ch[(i+c)%n]);
	    }
	}
	else
	{
	    c=c*-1;
	    for(int i=0;i<n;i++)
	    {
	        if(i<c)
		    printf("%c",ch[(n-(c-i))%n]);
		    else
		    printf("%c",ch[(i-c)%n]);
	    }
	    
	}

	return 0; 
}
// ---TEAM SCA---
