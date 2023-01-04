#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[1000],num, i;
    scanf("%d", &num);
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }


    /* Write the logic to reverse the array. */
    i=num-1;
    for(i;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
}
