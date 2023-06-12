#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
             i<5 ? j>=6-i&&j<=4+i ? printf("*") : printf(" ") : j<=14-i&&j>=-4+i ? printf("*") : printf(" ");
        printf("\n\n");
    }
    getch();
    return 0;
}
