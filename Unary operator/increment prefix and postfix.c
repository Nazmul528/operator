#include<stdio.h>
int main()
{
    int a,i,n,m;
    printf("how many increment :");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        printf("\nEnter the value :");
        scanf("%d",&a);
        m=++a;
        printf("\nprefix increment\n");
        printf("the m=++a, m value :%d\n",m);
        printf("the m=++a, a value :%d\n\n",a);
        m=a++;
        printf("postfix increment\n");
        printf("the m=a++, m value :%d\n",m);
        printf("the m=a++, a value :%d\n",a);
    }
}    
