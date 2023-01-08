#include <stdio.h>

int main(void) {
	// your code goes here
	int n,calc1,total;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);\
	    calc1=a+b;
	    total=calc1+c;
	    if(total==180)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	    
	}
	return 0;
}

