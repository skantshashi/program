#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enters the nos:");
    scanf("%d%d%d",&a,&b,&c);
   
     if (a>b&&a>c)
     {
        printf("%d is greatest integer",a);
  
     }
     else if (b>a&&b>c)
     {
        printf("%d is greatest integer",b);
  
     }
     else
     {
         printf("%d is greatest integer",c);
  
     }
   
}