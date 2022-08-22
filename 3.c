#include<stdio.h>
int check(int);
int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    printf("%d",check(n));
}

int check(int n)
{
    if(n%2==0)
        return 1;
    return 0;
}