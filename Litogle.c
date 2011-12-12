#include<msp430.h>
main()
{
 int n = 0;
 P1DIR = 1;
 P1OUT = 1;
while(1)
{
while((P1IN >> 3) & 1); while(!((P1IN >> 3) & 1));
 {
   n++;
   if(n%2!=0)
    {
     P1DIR = 0x40;
     P1OUT = 0x40;
    }
  else
    {
     P1DIR = 1;
     P1OUT = 1;
    }
}}}
               
    


