#include<stdio.h>

int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return (fact);
}

int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    printf("factorial is %d",factorial(n));
}