#include<stdio.h>
void main()
{
int res,i;
char a[4]="9080";
res=0;
for(i=0;i<4;i++)
{
res=(res*10)+(a[i]-'0');
}
printf("%d",res);
}