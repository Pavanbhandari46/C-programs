#include<stdio.h>
#include<string.h>
struct student
{
 char name[20];
 int m;
 int roll;
 char g[2];
 };
 int main()
 {
 
  struct student s[20];
  char se[20];
  int i,n;
    printf("enter no of students\n");
    scanf("%d",&n);
   
    for(i=0;i<n;i++)
    {
     printf("ENTER THE NAME\n");
     scanf("%s",s[i].name);
      printf("ENTER THE roll no\n");
     scanf("%d",&s[i].roll);
      printf("ENTER THE grade\n");
     scanf("%s",s[i].g);
      printf("ENTER THE MARKS\n");
     scanf("%d",&s[i].m);
     }
      printf("enter search name\n");
    scanf("%s",se);
    for(i=0;i<n;i++)
    {
    if(strcmp(se,s[i].name)==0)
    {
     printf("MARKS=%d",s[i].m);
     return 0;
    }
   }
   return 0;
 }    
    
  
