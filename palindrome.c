#include<stdio.h>
int main()
{
 int num,r,sum=0,temp;
 printf("enter the no:");
 scanf("%d",&num);
 temp=num;
 while (num>0)
 {

     r=num%10;
     sum=(sum*10)+r;
     num=num/10;
 }
 if(sum==temp)
 {
     printf(" no is palindrome e.i :%d",temp);
 }
 else
 {
     printf("no is not a palindrome");
 }
 return 0;
}