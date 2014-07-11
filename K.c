#include<stdio.h>
#include<conio.h>
int main()
{
        int  i, k,n;
printf("enter vaue of n");
printf(" \n");
scanf("%d" ,& n);
printf(" \n");
printf(" \n");

    for ( i = n ; i >= 1 ; i--)
    {
        for ( k = 1 ; k <= i ; k++ )
        if(i==1||k==1||k==i)
            printf(" \x03 ");
else
 printf(" ");
        printf("\n");
    }

    for ( i = 0 ; i<= n-2 ; i++ )
    {
        for ( k = 0 ; k <= i ; k++)
if(i==n||k==1||k==i)
            printf("\x03 ");
else
 printf(" ");
 printf("\n");
    }

    getch();
}
