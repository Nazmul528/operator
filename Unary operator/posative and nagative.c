#include<stdio.h>
int main ()
{
    int a,i,n;
    printf("how many math :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {  printf("\nEnter the value :\a");
       scanf("%d",&a);
       n=-a;
       printf("the unary operator -a value :%d\n",n);
       n=+a;
       printf("the unary operator +a value :%d\n\n",n);

    }

}       
