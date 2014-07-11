#include<stdio.h>
#include<conio.h>
void main(){
int i,n,j,k,l;
printf("enter vaue of n");
printf(" \n");
scanf("%d" ,& n);
printf(" \n");
printf(" \n");

for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
    if(i==1||j==1||j==n||i==3)

printf("\x03");


else
printf(" ");
}


printf(" \n");
}
printf(" \n");
for(k=1;k<=n;k++){
for(l=1;l<=n;l++){

 if(l==1||l==n||l==k)

printf("\x03");


else
printf(" ");
}
printf(" \n");
}
printf(" \n");
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
    if(j==1)

printf("\x03");


else
printf(" ");

}

printf(" \n");
}
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
    for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
    if(i==1||j==1||j==n||i==3)

printf("\x03");


else
printf(" ");
}


printf(" \n");
}

getch();}

