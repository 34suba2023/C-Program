////Write a program to print the Occurrence of a Digit in a given Number in C

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,count=0,rem;
    printf("enter thr number");
    scanf("%d",&n);
    int digit;
    printf("enter the digit");
    scanf("%d",&digit);

    while(n){
            int rem=n%10;

            if(rem==digit)
            {
                count++;
            }
            n=n/10;

    }
    printf("%d",count);
    return 0;
}
