//Q-6 WRITE A PROGRAM TO PRINT THE BELOW PATTERN USING NESTED FOR LOOP.
#include<stdio.h>
#include<conio.h>
void main(){
int r,s,t;
clrscr();
for(s=1;s<=5;s++){
for(t=1;t<=s;t++){
printf(" ");}
for(r=5;r>=s;r--){
printf("%d",r);}
printf("\n");}
getch();
}

