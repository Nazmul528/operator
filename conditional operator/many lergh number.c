#include<stdio.h>
int main()
{
    int num2,num3,lergh,i,n;
    printf("How many lergh number :");
    scanf("%d",&n);
    for(i=0; i<n; i++) {
        printf("Enter the two number ");
        scanf("%d %d",&num2,&num3);
        lergh =  num2>num3 ? num2 :num3;
        printf("lergh number %d\n\n",lergh);
    }

}
