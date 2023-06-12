#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,j;
    for(i=1;i<=4;i++)
    {
        for(x=65,j=1;j<=7;j++)
        {
            if(j<=8-i&&j>=i)
            {
                printf("%c ",x);
                j<4? x++: x--;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}
