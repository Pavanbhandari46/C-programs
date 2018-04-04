#include<stdio.h>
int main()
{
  int n,i,j,m,p,q,s,a[10][10],b[10][10],c[10][10];
  printf("ENTER THE ORDER OF MATRIX a\n");
    scanf("%d%d",&m,&n);
  printf("ENTER THE ELEMENTS OF MATRIX a\n");
    for(i=0;i<m;i++)
      for(j=0;j<n;j++)
      {
       scanf("%d",&a[i][j]);
      }
  printf("ENTER THE ORDER OF MATRIX b\n");
    scanf("%d%d",&p,&q);
  printf("ENTER THE ELEMENTS OF MATRIX b\n");  
    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
        {
         scanf("%d",&b[j][i]);
        }
    if(n==p)
    {
      for(i=0;i<m;i++)
       {
        for(j=0;j<n;j++)
        {    
         c[i][j]=0;
         for(s=0;s<n;s++)
         {
         c[i][j]=c[i][j]+(a[i][s]*b[s][i]);
         }
        }
       } 
         printf("MULTIPLICATION OF a*b =\n");
        for(i=0;i<m;i++)
        {
          for(j=0;j<q;j++)    
           {
            printf("%d ",c[i][j]);
           }
           printf("\n");
        }
      }  
     else
       printf("MULTIPLICATION IS IMPOSIBLE\n");
   return 0;
 }    
         
        
