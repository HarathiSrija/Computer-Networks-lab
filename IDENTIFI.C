#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
int i,j=0,flag=0;
char a[10];
clrscr();
printf("\n enter the string");
scanf("%s",a);
i=strlen(a);
printf("\n the length of the string i=%d",i);
if(i<=8&&isalpha(a[0]))
{
while(a[j]!='\0')
{
if(isalnum(a[j])||a[j]=='-')
{
flaf=1;
}
j++;
}
if(flag==1)
printf("\n the given string is an identifier");
}
else
{
printf("\n the given string is not identifier");
}
getch();
}