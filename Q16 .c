#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
          i==5 ? printf("*") : j==4+i||j==6-i ? printf("*") : printf(" ");
        printf("\n\n");
    }
    getch();
    return 0;
}
