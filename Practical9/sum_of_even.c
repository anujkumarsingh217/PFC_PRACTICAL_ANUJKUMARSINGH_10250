#include <stdio.h>
int main() 
{
    int n,i,sum=0;
    scanf("%d",&n);
    int arr[20];
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++) 
    {
        if(arr[i] % 2 == 0)
            sum += arr[i];
    }
    printf("sum of even: %d\n", sum);
    return 0;
}
// output:
// 5
// 2
// 1
// 3
// 4
// 6
// sum of even: 12