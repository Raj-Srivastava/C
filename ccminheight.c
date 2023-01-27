#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
	    int x;
	    int h;
	    scanf("%d %d",&x,&h);
	    if((x-h)>=0)
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

