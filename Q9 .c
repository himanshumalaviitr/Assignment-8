#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,j;
    for(i=1;i<=4;i++)
    {
        for(x=1,j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
                {
                    printf("%d",x);
                    j<4 ? x++ : x--;
                }
            else
                printf(" ");
        }
            printf("\n");
    }
    getch();
    return 0;
}
