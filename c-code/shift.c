#include<stdio.h>
#include<math.h>
unsigned int rightshift(unsigned int x,unsigned int n);
int main()
{
  unsigned int x,n,a;
  printf("ENTER THE NUMBER\n");
  scanf("%u",&x);
  printf("ENTER THE SHIFT TIMES\n");
  scanf("%u",&n);
  a=rightshift(x,n);
  printf("SHIFTED NUMBER IS==%u\n",a);
  return 0;
 }
  unsigned int rightshift(unsigned int x,unsigned int n)
  {
   int i;
   for(i=0;i<n;i++)
   {
    if(x%2==0)
    {
     x=x>>1;
    }
    else
    {
     x=x>>1;
     x=x+pow(2,31);
     }
    }
   return x;
  }    
