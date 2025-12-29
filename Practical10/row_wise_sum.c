#include <stdio.h>

int main() {
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
             scanf("%d", &arr[i][j]);
        }
    }
    for(i=0;i<r;i++) 
    {
        int sum=0;
        for(j=0;j<c;j++)
            sum+=arr[i][j];

        printf("Sum of row %d = %d\n", i + 1, sum);
    }
    return 0;
}
// output:
// 2
// 2
// 1
// 2
// 3
// 4
// Sum of row 1 = 3
// Sum of row 2 = 7