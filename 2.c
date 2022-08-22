#include<stdio.h>
float sii( float, float, float);
int main()
{
    float p,r,t;
    printf("Enter amount ");
    scanf("%f",&p);
    printf("Enter rate of interest ");
    scanf("%f",&r);
    printf("Enter time ");
    scanf("%f",&t);
    printf("Simple Interest is %.2f",sii(p, r, t ));
    return 0;
}
float sii(float p, float r, float t)
{
    float si;
    si = (p * r * t) / 100;
    return (si);
}