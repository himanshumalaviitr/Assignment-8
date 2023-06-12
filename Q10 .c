#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,j;
    for(i=1;i<=4;i++)
    {
        for(x=1,j=1;j<=7;j++)
        {
            if(j>=3+i||j<=5-i)
                printf("%d",x);
            else
                 printf(" ");
            j<4?x++:x--;
        }
        printf("\n");
    }
    getch();
    return 0;
}
