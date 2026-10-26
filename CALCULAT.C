#include<stdio.h>
int main()
{
int a,b;
int choice;
printf("Add\n");
printf("sub\n");
printf("multiple\n");
printf("divided\n");
printf("enter choice:");
scanf("%d",&choice);
printf("enter two number:");
scanf("%d %d",&a,&b);
if(choice==1)
{
printf("Answer=%d",a+b);
}
else if(choice==2)
{
printf("Answer=%d",a-b);
}
else if(choice==3)
{
printf("Answer=%d",a*b);
}
else if(choice==4)
{
if(b!=0)
printf("Answer=%d",a/b);
else
printf("division by zero not possible");
}
else
{
printf("invalid choice");
}
return 0;
}