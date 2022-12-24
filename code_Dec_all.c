#include<stdio.h>

int main()
{
    int dec, tempDec;
    int bin[100];
    int octal[100];
    int hex[100];
    int iBin = 0;
    int iOctal = 0;
    int iHex = 0, j;

    printf(" Input Decimal value : ");

    scanf("%d", &tempDec);

// Decimal to Binary
    dec = tempDec;
    do{
        bin[iBin] = dec % 2;
        dec /= 2;
        iBin++; 
    }while(dec > 0);

// Decimal to Octal
    dec = tempDec;
    do{
        octal[iOctal] = dec % 8;
        dec /= 8;
        iOctal++;   
    }while(dec > 0);

// Decimal to Hexadecimal
    dec = tempDec;
    do{
        hex[iHex] = dec % 16;
        dec /= 16;
        iHex++; 
    }while(dec > 0);

// Display for Binary
    printf("\n Binary value is ");
    for(j = iBin - 1; j >= 0; j--)
    {
        printf("%d", bin[j]);   
    }

// Display for Octal
    printf("\n Octal value is ");
    for(j = iOctal - 1; j >= 0; j--)
    {
       printf("%d", octal[j]); 
    }

// Display for Hexadecimal
    printf("\n Hexadecimal value is ");
    for(j = iHex - 1; j >= 0; j--)
    {
        switch(hex[j])
        {
            case 15 : printf("F"); break;
            case 14 : printf("E"); break;
            case 13 : printf("D"); break;
            case 12 : printf("C"); break;
            case 11 : printf("B"); break;
            case 10 : printf("A"); break;
            default : printf("%d", hex[j]);
        }   
    }
    printf("\n");

    return 0;
}