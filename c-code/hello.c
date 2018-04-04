#include<stdio.h>
int a[20],e,p;
void create();
void insert();
void display();
void delet();
void exit();
int main()
{
  int c;
  while(c)
  {
       printf(".....MENU....\n");
       printf("CREATE\n");
       printf("DISPLAY\n");
       printf("INSERT\n");
       printf("DELET\n");
       printf("EXIT\n");
       printf("......................\n");
       printf("ENTER YOUR CHOICE\n");

      scanf("%d",&c);

  switch (c)
  {
    case 1: create();
    break;
    case 2: display();
    break;
    case 3: insert();
    break ;
    case 4: delet();
    break;
    case 4: exit(0);
    break;
    default :printf("INVALID CHOICE\n");
    break ;
  }
  }

  return 0;
}
void create()
{

    printf("ENTER THE SIZE OF ARRAY :");
    scanf("%d",&n);
    printf("ENTER THE ARRAY ELEMENTS\n");
    for(i=0;i<n;ii++)
     scanf("%d",&a[i]);

}
void display()
{
    printf("THE ARRAY ELEMENTS ARE :\n");
        for(i=0;i<n;ii++)
          printf("%d",a[i])

}
void insert()
{
    printf("ENTER THE POSITION OF NEW ELEMENT\n");
    scanf("%d",&p);
    printf("ENTERT THE NEW ELEMENT\n");
    scanf("%d",&e);
    for(i=n-1;i>=p;i--)
    {
     a[i+1]=a[i];
    }
    a[p]=e;
    n=n+1;
}
void delet()
{
    printf("ENTER THE POSITION OF THE ELEMENT\n");
    scanf("%d",&p);
    e=a[p];
    for(i=p;i<n-1;i++)
   {

       a[i]=a[i+1];

   }
  n=n-1;
printf("DELETED ELEMENT IE :%d",e);
}





