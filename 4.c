#include<stdio.h>
void print(int);
int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    print (n);
}
void print(int n)
{
    int i;
    for(i=1;i<=n;i++)
    printf("%d\n",i);
}