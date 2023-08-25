#include<stdio.h>
int main()
{
    int a=10,b=20;
    swap(a,b);
    //printf("%d,%d",a,b);
}
int swap(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("%d,%d",a,b);
}
