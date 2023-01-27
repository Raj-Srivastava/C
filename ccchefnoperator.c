#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a>b)
	    {
	        printf(">\n");
	    }
	    else if(a<b)
	    {
	        printf("<\n");
	    }
	    else
	    {
	        printf("=\n");
	    }
	}
	return 0;
}

