#include<stdio.h>
void main(){
     long int n,i=1,d=0,m=0,l=0;
     clrscr();
     printf("\n\t\t\tEnter binary:");
     scanf("%ld",&n);
     printf("\n\n\t\t\t---------------------");
     printf("\n\t\t\tBinary to decimal:");
     while(n>0){
               m=(n%10);
               n=(n/10);
               l=m*i;
               d=d+l;
               i=i*2;
          }
     printf("%ld",d);
     printf("\n\t\t\t---------------------");
}