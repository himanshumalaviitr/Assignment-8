#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,j;
    for(i=1;i<=7;i++)
    {
        for(x=65,j=1;j<=13;j++)
        {
            if(j>=6+i||j<=8-i)
                printf("%c ",x);
            else
                printf("  ");
            j<7? x++: x--;
        }
        printf("\n");
    }
}
