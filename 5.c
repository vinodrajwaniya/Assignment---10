#include<stdio.h>
void odd(int);
int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    odd (n);
}
void odd(int n)
{
    int i;
    for(i=1;i<=n;i++)
    printf("%d\n",(2*i-1));
}