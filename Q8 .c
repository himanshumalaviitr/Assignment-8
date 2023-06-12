#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,x;
    for(i=1;i<=4 ;i++)
    {
        for(x=1,j=1;j<=7;j++)
        {
          if(j>=5-i&&j<=3+i)
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
