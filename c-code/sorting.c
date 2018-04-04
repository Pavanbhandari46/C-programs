#include<stdio.h>
int main()
{
 int a[10],i,j,n,t;
 printf("enter the no of elements\n");
 scanf("%d",&n);
 printf("Enter the elements of array\n");
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
 for(i=0;i<n;i++)
   {
     for(j=0;j<n-i;j++)
     {
       if(a[j]>a[j+1])
       {
         t=a[j];
         a[j]=a[j+1];
         a[j+1]=t;
       }
     }
   }
   
 printf("Array in sorted order is");
 for(j=0;j<n;j++)
 { 
  printf("\n%d\n",a[j+1]);
 } 
 return 0;
}             
