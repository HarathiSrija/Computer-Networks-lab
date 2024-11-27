#include<stdio.h>
#include<conio.h>
#include<string.h>
void pm();
int i,ch,j,l,addr=100;
char ex[10],exp[10],exp1[10],exp2[10],id1[5],op[5],id2[5];
void main()
{
clrscr();
switch(ch)
{
case 1:
printf("\n enter the expression with assignment operator");
scanf("%s",exp);
l=strlen(exp);
exp2[0]='\0';
i=0;
while(exp[i]!='=')
{
i++;
}
strncat(exp2,exp,i);
strrev(exp);
exp1[0]='\0';
strncat(exp1,exp,l-(i+1));
strrev(exp1);
printf("three address code:\n temp=%s\ntemp1=%c%ctemp=%s\ntemp1=%c%ctemp\n",exp1,exp2);
break;
case 2:
exit(0);
}
strrev(exp);
j=l-i-1;
strncat(exp1,exp,j);
strrev(exp1);
printf("three address code:\ntemp=%s\ntemp1=%c%ctemp=%s\ntemp1=%c%ctemp\n",exp1,exp[j+1],exp[j]);
}
