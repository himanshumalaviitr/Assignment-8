#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,j;
    for(i=1;i<=5;i++)
    {
        for(x=65,j=1;j<=9;j++)
        {
            if(j<=4+i&&j>=6-i)
            {
                printf("%c ",x);
                j<5? x++: x--;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}
