//Find the Sum of First N Natural Numbers

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)

       sum=sum+i;
   printf("Sum is %d",sum);
   return 0;
}

// Time complexity : O(n)
// Space complexity : O(1)
