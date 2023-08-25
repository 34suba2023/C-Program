#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n,copy,digit,sum=0;
    printf("Enter n:");
    scanf("%d",&n);

    copy=n;
    while(copy>0)
    {
        sum=sum+pow((copy%10),digit);
    }
    {
        copy=copy/10;
        digit++
    }

  getch();
}
