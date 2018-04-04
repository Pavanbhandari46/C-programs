#include<stdio.h>
#include<stdlib.h>
int main()
{
 FILE *f1,*f2,*f3;
 char name[100],usn[30];
f1=fopen("usn.txt","r");
f2=fopen("name.txt","r");
f3=fopen("output.txt","w");
if(f1==NULL)
printf("FILE USN NOT CREATED");
else if(f2==NULL)
printf("FILE NAME NOT CREATED");
else if(f3==NULL)
printf("FILE OUTPUT NOT CREATED");
else
{ 
 while(1)
 {
   fscanf(f1,"%s",usn);
   fscanf(f2,"%s",name);
   if(!feof(f1)&&!feof(f2))
   fprintf(f3,"%s\t%s\n",usn,name);
   else
   break;
  }
 }
 return 0;
} 
   

