#include<stdio.h>
#include<math.h>
int fact(int n);
int main()
{
 int n,a,r;
 printf("ENTER N=\n");
 scanf("%d",&n);
 printf("ENTER r=\n");
 scanf("%d",&r);
 a=fact(n)/(fact(n-r));
 printf("factorial=%d",a);
 return 0;
}
int fact(int n)
  {
   if(n==1||n==0)
   return 1;
   else
    return n*fact(n-1);
   } 
     
