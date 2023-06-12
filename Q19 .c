#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=13;i++)
    {
        for(j=1;j<=19;j++)
         {
            if(i==4)
            {
                switch(j)
                {
                case 7:
                    printf("M");
                    break;
                case 8:
                    printf("y");
                    break;
                case 9:
                    printf("S");
                    break;
                case 10:
                    printf("i");
                    break;
                case 11:
                    printf("r");
                    break;
                case 12:
                    printf("G");
                    break;
                default:
                    printf("*");
                }
            }
        else if(i<=3)
            (j>=4-i&&j<=6+i)||(j>=14-i&&j<=16+i) ? printf("*") : printf(" ");
        else
            (j>=-3+i&&j<=23-i) ? printf("*") : printf(" ");
         }
        printf("\n");
    }
    getch();
    return 0;

}
