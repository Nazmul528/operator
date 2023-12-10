#include<stdio.h>
int main()
{
    float c,f,k;
    printf("Enter the centigrate ");
    scanf("%f",&c);
    f=(1.8*c)+32;
    k=c+273;
    printf("fahrenheit :%.3f\n",f);
    printf("kalvin %.3f",k);
}
