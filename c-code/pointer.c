#include<stdio.h>
#include<math.h>
  int main()
{
  int i,n,s=0;
  float a[20], m,var=0,sd;
   printf("ENTER THE NO OF ELEMENTS\n");
   scanf("%d",&n);
    
   printf("ENTER THE ELEMENTS\n" );
    for(i=0;i<n;i++)
    {
      scanf("%f",a+i);
     } 
     for(i=0;i<n;i++)
          s=s+*(a+i);
          m=s/n;
          for(i=0;i<n;i++)
          {
           var=var+pow(*(a+i)-m,2);
          }
          var=var/n;
          sd=sqrt(var);
   printf("standard deviation=%f\n",sd );
   printf("sum=%d\n",s);
     printf("mean=%f\n",m);
       printf("var=%f",var);
   return 0;
 }
         
      
