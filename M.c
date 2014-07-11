#include<stdio.h>
#include<conio.h>
void main()
{
    char i=3;
    int j,k;

    for(j=0; j<=8; j++)     //s
        printf("%c",i);

    printf("\n%c\n%c\n",i,i);

    for(j=0; j<=8; j++)
        printf("%c",i);

    printf("\n");

    for(j=0;j<=1; j++)
    {
        for(k=0; k<=7; k++)
        {
            printf(" ");
        }

        printf("%c\n",i);
    }

    for(j=0; j<=8; j++)
        printf("%c",i);

    printf("\n\n");

    for(j=0; j<=7; j++)
    {      //u
        printf("%c",i);

        for(k=0; k<=1; k++)
            printf("   ");

        printf("%c\n",i);}

        for(j=0; j<=6; j++)
            printf("%c",i);

        printf("\n\n");
        printf("\x03       \x03\n");
printf("\x03\x03     \x03\x03\n");
printf("\x03 \x03   \x03 \x03\n");
printf("\x03  \x03 \x03  \x03\n");
printf("\x03   \x03   \x03\n");
printf("\x03       \x03\n");
printf("\x03       \x03\n");
    }
