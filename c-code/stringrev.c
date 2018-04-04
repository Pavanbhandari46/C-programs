#include<stdio.h>
#include<string.h>
int main()
{
 char se,s[10];
 int i,j;
 
 printf("string =");
 scanf("%s",s);
 i=0;
 j=strlen(s)-1;
 while(i<j)
 {
  se=s[i];
  s[i]=s[j];
  s[j]=se;
  i++;
  j--;
 } 
 printf("reveresed string is=%s\n",s);
 return 0;
} 
