#include<stdio.h>

void primefact(int n)
{
    int i;
    for(i=2; n!=1 ; i++)
    {
        while (n%i==0)
        {
            n=n/i;
            printf("%d, ",i);
        }
        
    }
}

int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    primefact(n);
    return 0;
}