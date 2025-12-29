#include <stdio.h>
int main() 
{
    int n,i,max,min;
    scanf("%d", &n);
    int arr[20];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];

    for(i=1;i<n;i++) 
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    return 0;
}
// output:
// 5
// 1
// 5
// 6
// 7 
// 8
// Maximum = 8
// Minimum = 1
 