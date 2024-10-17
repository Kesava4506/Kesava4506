#include<stdio.h>
void main()
{
int a,i;
char name[10][10];
printf("enter no of names");
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%s",name[i]);
}
printf("\n the names are as follows ");
for(i=0;i<a;i++)
{
printf("\n name %d %s",i+1,name[i]);
}
}