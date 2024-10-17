#include<stdio.h>
void main()
{
int len,l,d,s,u,i;
char pass[20];
printf("enter your password ");
scanf("%s",pass);
len=strlen(pass);
l=0,d=0,s=0,u=0;
if(len>7)
{
for(i=0;i<len;i++)
{
if(isupper(pass[i]))
u++;
else if(islower(pass[i]))
l++;
else if(isdigit (pass[i]))
d++;
else
s++;
}
if(l>0&&u>0&&d>0&&s>0)
printf("strong password ");
else
printf("weak");
}
else
printf("weak due to less characters");
}