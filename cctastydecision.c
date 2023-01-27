#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{   
	    int x;
	    int y;
	    scanf("%d %d",&x,&y);
	    if((x*2)==(y*5))
	    {
	        printf("Either\n");
	    }
	    else if((x*2)>=(y*5))
	    {
	        printf("Chocolate\n");
	    }
	    else
	    {
	        printf("Candy\n");
	    }
	}
	return 0;
}

