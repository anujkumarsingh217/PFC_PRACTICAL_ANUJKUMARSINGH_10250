#include <stdio.h>
int main() 
{
    int n,i;
    scanf("%d",&n);
    int arr[20];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nreverse\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
//output:
// 5
// 1
// 2
// 3
// 4
// 5
// reverse
// 5 4 3 2 1