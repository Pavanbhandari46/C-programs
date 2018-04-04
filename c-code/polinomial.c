#include<stdio.h>
int main()
{
  int i,x,a[20],s,n;
  printf("ENTER THE DEGREE\n");
  scanf("%d",&n);
  printf("ENTER THE CO-EFFICIENT\n");
       for(i=0;i<=n;i++)
       {
        scanf("%d",&a[i]);
       } 
 printf("ENTER THE VALUE OF X\n");
 scanf("%d",&x);
 s=a[0];
  for(i=1;i<=n;i++)
    {
      s=(s*x)+a[i];
    } 
  printf("SUM=%d",s);
  return 0;
}     
        

        

