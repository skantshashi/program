#include<stdio.h>
int main()
{
    int n,temp;
    printf("enter the no:");
    scanf("%d",&n);
    temp=n;
    for(int i=0;i<=n;i++)
    {
        /* code */
        n=n-1;
        temp=temp*n;

    }
    printf("factorial is %d",temp);
    return 0;
}