#include <stdio.h>

int main() {
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int arr[20][20];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &arr[i][j]);
    int max = arr[0][0], min = arr[0][0];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++) 
        {
            if(arr[i][j]>max)
                max=arr[i][j];
            if(arr[i][j]<min)
                min=arr[i][j];
        }
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    return 0;
}
// output:
// 2
// 2
// 1
// 2
// 3
// 4
// Maximum = 4
// Minimum = 1