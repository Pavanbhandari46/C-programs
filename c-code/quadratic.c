/*Quadratic equation*/
#include<stdio.h>
#include<math.h>
int main()
{
 float a,b,c,r1,r2,d,im,re;
  printf("Enter the coefficients");
  scanf("%f%f%f",&a,&b,&c);
   d=(b*b)-(4*a*c) ;
  if(d==0) 
    {
     printf("The roots are real and equal\n");
     r1=r2=-b/(2*a);
     printf("Root 1=Root 2=%f",r1);
    }
   else if(d>0)
    {
     printf("The are roots real and distinct\n ");
     r1=(-b+sqrt(d))/(2*a);
     r2=(-b-sqrt(d))/(2*a);
     printf("Root 1=%f\nRoot 2=%f",r1,r2);
    }  
   else
    {
     printf("The roots are imaginary\n");
     im=sqrt(fabs(d))/(2*a);
     re=-b/(2*a);
     printf("Root 1=%f+i%f\n",im,re);
     printf("Root 2=%f-i%f",im,re);
    }
  return 0;
}     
