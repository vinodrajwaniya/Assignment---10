#include<stdio.h>
int check(int n, int k)
{
    int rem=0;
    while (n)
    {
        rem=n%10;
        if(rem==k)
            return 1;
        n=n/10;
    }
    return 0;  
}
    

int main()
{
    int n,k;
    printf("Enter an digit ");
    scanf("%d",&n);
    printf("Enter an number ");
    scanf("%d",&k);
    printf("%d",check(n,k));
}