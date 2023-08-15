#include<stdio.h>
int main()
{
    int n,i,start,end;
    scanf("%d%d%d",&n,&start,&end);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=start&&a[i]<=end)
        {
        printf("%d",i);

    }
}
}
