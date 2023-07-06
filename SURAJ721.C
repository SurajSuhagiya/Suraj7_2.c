//Q-1 WRITE A PROGRAM TO PRINT THE BELOW PATTERN USING NESTED FOR LOOP.
#include<stdio.h>
#include<conio.h>
void main(){
int r,s,t;
clrscr();
for(r=1;r<=5;r++)
{
for(t=4;t>=r;t--)
 {
  printf(" ");
 }
 for(s=r;s>=1;s--)
 {
  printf("%d",s);
 }
  printf("\n");
}
getch();
}
/*OUTPUT=     1
	     21
	    321
	   4321
	  54321
*/