// Method 3 For an input n

// Create variable sum = 0
// Call function getSum(sum, n)
// Base Case, n == 0 return sum
// Others return n + getSum(sum, n-1)
// Print the sum value in main

#include <stdio.h>

int getSum(int sum,int n)
{
    if(n==0)
        return sum;

    return n+getSum(sum,n-1);
}

int main()
{
    int n, sum = 0;
    scanf("%d",&n);

    printf("%d",getSum(sum, n));

    return 0;
}
