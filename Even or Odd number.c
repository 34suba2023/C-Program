//Even or Odd number
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);

    if(num%2==0)
        printf("EVEN NUM");
    else
        printf("ODD NUM");
    return 0;
}
