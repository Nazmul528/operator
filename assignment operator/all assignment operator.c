#include<stdio.h>
int main()
{
    int n,a=5 ;
    printf("Enter the value :");
    scanf("%d",&n);
    n+=a;
    printf("the assignment operator n+=5 value :%d\n",n);
    n-=a;
    printf("the assignment operator n-=5 value :%d\n",n);
    n*=a;
    printf("the assignment operator n*=5 value :%d\n",n);
    n/=a;
    printf("the assignment operator n/=5 value :%d\n",n);
    n%=a;
    printf("the assignment operator n%=5 value :%d\n",n);

}
