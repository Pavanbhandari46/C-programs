//weakday
#include<stdio.h>
int main()
{
   int n;
   printf("enter the day number`\n");
   scanf("%d",&n);
   if(n>=0&&n<=5)
    printf("weekday");
   else if(n>5&&n<8)
    printf("weekend") ;
   else 
    printf("invalid input");
   return 0;
 }   
