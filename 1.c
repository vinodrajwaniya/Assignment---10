#include<stdio.h>
float area(float);
int main()
{
    float r;
    printf("Enter r lenght ");
    scanf("%f",&r);
    printf("%.2f",area(r));
    return 0;
}

float area(float r)
{
    return(3.14*r*r);
}