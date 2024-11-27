#include<stdio.h>
#include<conio.h>
void main()
{
char sender[50],receiver[50];
int i,winsize;
clrscr();
printf("\n ENTER THE WINDOWS SIZE:");
scanf("%d",&winsize);
printf("\n SENDER WINDOW IS EXPANDED TO STORE MESSAGE OR WINDOW");
printf("\n ENTER THE DATA TO BE SENT:");
fflush(stdin);
gets(sender);
for(i=0;i<winsize;i++)
receiver[i]=sender[i]
;
receiver[i]=NULL;
printf("\n MESSAGE SEND BY THE SENDER:");
puts(sender);
printf("\n WINDOW SIZE OF RECEIVER IS EXPANDED\n");
printf("\n ACKNOWLEDGEMENT FROM RECEIVER");
for(i=0;i<winsize;i++)
printf("\n message received by receiver is:");
puts(receiver);
printf("\n window size of receiver is shrinked\n");
getch();
}