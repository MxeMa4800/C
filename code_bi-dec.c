#include<stdio.h>
int main()
{
    int bin , dec = 0 , i , m , n = 1 ;
    printf("Enter number : ");
    scanf("%d",&bin);

    for(i=bin ; i>0;i=i/10){
        m = i%10;
        dec = dec+(m*n);
        n=n*2;

    }
    printf("Decimal : %d",dec);
    printf("\n");
    
}