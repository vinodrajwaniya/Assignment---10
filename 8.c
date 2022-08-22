#include<stdio.h>

int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return (fact);
}
int arrangement(int n, int r)
{
    return fact(n)/fact(r);

}

int main()
{
    int n,r;
    printf("Enter n value ");
    scanf("%d",&n);
    printf("enter r value ");
    scanf("%d",&r);
    printf("arrangement is %d",arrangement(n, r));
}