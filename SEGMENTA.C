#include<stdio.h>
#include<conio.h>
#include<math.h>
int sost;
void gstinfo();
void ptladdr();
struct segtab
{
int sno;
intbaddr;
int limit;
int val[10];
}
st[10];
void gstinfo()
{
int i,j;
printf("\n\t enter the size of the segment table:");
scanf("%d",&sost);
for(i=1;i<=sost;i++)
{
printf("\n\t Enter the Base Address:");
scanf("%d",&st[i].baddr);
printf("\n\t Enter the limit:);
scanf("%d",&st[i].limit);
for(j=0;j<=sost;i++)
printf("\t\t%d\t\t%d\t\t%d\n\n",st[i].sno,st[i],baddr,st[i].limit);
printf("\n\nEnter the logical Address:");
scanf("%d",&swd);
n=swd;
while(n!=0){
n=n/10:
d++;
}
s=swd/pow(10,d-1);
disp=swd%(int)pow(10,d-1);
if(s<=sost)
{
if(disp<st[s].limit)
{
paddr=st[s].baddr+disp;
printf("\n\tLogical Address is:%d",swd);
printf("\n\tMapped Physical address is:%d",paddr);
printf("\n\tThe value is:%d",(st[s].val[disp]));
}
Else
printf("\n\t\tLimit of segment %d is high\n\n",s);
}
else
printf("\n\t\tInvalid segment address \n");
}
void main()
{
char ch;
clrscr();
gstinfo();
do
{
ptladdr();
printf("\n\t Do u want to continue(Y/N)");
flushall();
scanf("%c",&ch);
}
while(ch=='Y'||ch='y');
getch();
}
