#include<stdio.h>
#include<math.h>
int main()
{
  float s,t,x1,x,i;
  printf("Enter the angle in degree\n");
  scanf("%f",&x);
  x1=(x*3.1414)/180;
  t=x1;
  s=x1;
  for(i=3;fabs(t)>0.000001;i=i+2)
  {
    t=-(t*x1*x1)/((i-1)*(i));
    s=s+t;
  }
 printf("sin%f'=%f",x,s);
 printf("The value of sin using library function=%f",sin(x1));
 return 0;
}



