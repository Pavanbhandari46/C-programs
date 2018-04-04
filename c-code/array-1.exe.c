#include<stdio.h>
int main()
{ 
  int i,n=0;
  for(i=0;i<10;i=i+2)
  {
    n=n+i;
  }
  printf("sum=%d",n);
  return 0;
}  
