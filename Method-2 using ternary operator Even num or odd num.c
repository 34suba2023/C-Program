//Method-2 using ternary operator Even num or odd num
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    //using ternary operator
    //Checking if the number is divisible by 2
    num%2==0? printf("Even"):printf("Odd");
    return 0;
}
