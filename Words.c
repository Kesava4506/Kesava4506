#include<stdio.h>
#include<string.h>
void main()
{
int len,i,count;
char a[200];
printf("enter your sentance");
gets(a);
 len=strlen(a);
 count=0;
for( i=0;i<len;i++)
{
if(a[i]==' '&&a[ i+1]!=' ')
count =count+1;
}
printf("the no of words are %d",count+1);
}
