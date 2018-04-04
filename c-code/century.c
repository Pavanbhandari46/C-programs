#include<stdio.h>
int main()
{
  int y;
  printf("Enter the year\n");
  scanf("%d",&y);
  if(y%4==0)
  {
    if(y%100==0)
     {
       if(y%400==0)
        printf("It is a century leapyear\n");
       else
        printf("not a century Leap year\n");
     }    
   else
    printf("leap year\n");
  }
  else
  printf("Not a leap year")  ;
  return 0;
}    
