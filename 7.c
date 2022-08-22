#include<stdio.h>

int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return (fact);
}
int combination(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));

}

int main()
{
    int n,r;
    printf("Enter an number ");
    scanf("%d",&n);
    printf("enter r value ");
    scanf("%d",&r);
    printf("Combination is %d",combination(n, r));
}