#include<stdio.h>
#include<stdlib.h>
#define NOF_PACKETS 10
int rands(int a)
{
int rn=(rand()%10)%a;
return rn==0 ? 1:rn;
}
int main()
{
int packet_sz[NOF_PACKETS],i,clk,b_size,o_rate,p_sz_rm=0,p_sz,p_time,op;
for(i=0;i<NOF_PACKETS;++i)
packet_sz[i]=rands(6)*10;
printf("\npacket[%d]:%d bytes\t",i,packet_sz[i]);
printf("\nEnter the Output rate:");
scanf("%d",&o_rate);
printf("Enter the  Bucket Size:");
scanf("%d",&b_size);
for(i=0;
i<NOF_PACKETS;++i)
{
if((packet_sz[i]+p_sz_rm)>b_size)
if(packet_sz[i]>b_size)
printf("\n\nIncomeing packet size(%dbytes) is Greater than bucket capacity(%dbytes)-PACKET REJECTED",packet_sz[i],b_size);
else
printf("\n\nBucket capacit6y exceeded-PACKET REJECTED!!");
else
{
p_sz_rm +=packet_sz[i];
printf("\n\nincoming Packet size:%d",packet_sz[i]);
printf("\nBytes remaining to Transmit: %d",p_sz_rm);
p_time=rands(4)*10;
printf("\nTime left foer transmission:%d units",p_time);
for(clk=10;clk<=p_time;clk+=10)
{
sleep(1);
if(p_sz_rm)
{
if(p_sz_rm<o_rate)
op=p_sz_rm,p_sz_rm=0;
else
op=o_rate,p_sz_rm-=o_rate;
printf("\nPacket of size %d Transmit",op);
printf("---Bytes Remainingn to Transmit: %d",p_sz_rm);
}
else
{
printf("\nTime left for transmission:%d unit",p_time-clk);
}
}
}
}
return 0;
}


