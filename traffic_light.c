#include<reg51.h>
sbit red1=P1^0;
sbit red2=P1^1;
sbit red3=P1^2;

sbit green1=P1^3;
sbit green2=P1^4;
sbit green3=P1^5;

sbit yellow1=P1^6;
sbit yellow2=P1^7;
sbit yellow3=P2^0;

void delay(unsigned int);
void line2();
void line3();
void main(void)
{
	red1=red2=red3=green1=green2=green3=yellow1=yellow2=yellow3=0;
    while(1)
    {
			
			yellow1=1;
			delay(120000);
			yellow1=0;
			red1=1;
			line2();
			red1=0;
			green1=1;
			delay(3100000);
			green1=0;		
    }
}
void delay(unsigned int itm)
{
unsigned int i,j;
    for(i=0;i<itm;i++);
			{
				for(j=0;j<65000;j++);
			}
}

void line2(){
			yellow2=0;
			red2=0;
			
			green2=1;
			delay(3100000);
			green2=0;
			yellow2=1;
			delay(120000);
			yellow2=0;
			red2=1;
			line3();
}
void line3(){
			yellow3=0;
			red3=0;
			
			green3=1;
			delay(3100000);
			green3=0;
			yellow3=1;
			delay(120000);
			yellow3=0;
			red3=1;
}
