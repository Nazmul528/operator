#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the two number;");
    scanf("%d %d",&a,&b);
    c=a&b;
    printf("a&b :%d\n",c);
    c=a|b;
    printf("a|b :%d\n",c);
    c=a^b;
    printf("a^b :%d\n",c);
    c=a>>b;
    printf("a>>b :%d\n",c);
    c=a<<b;
    printf("a<<b :%d\n",c);

}
