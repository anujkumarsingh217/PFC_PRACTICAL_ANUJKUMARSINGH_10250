#include<stdio.h>
int main()
{
  //anuj kumar singh 10250
  char i,j;
   for(i=65;i<=68;i++)
    {
        for(j=65;j<=i;j++)
        {
          printf("%c ",j);
        }
        printf("\n");
    }
}
//output
// A 
// A B
// A B C
// A B C D