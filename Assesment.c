#include <stdio.h>

int multiplication();


void main()
{


multiplication();







}
int multiplication()
{
    int a[2][3]  ;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter value of a=");
            scanf("%d", &a[i][j]);
        }
    }

    int b[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter value of b=");
            scanf("%d", &b[i][j]);
        }
    }

int c[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] * b[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("  %d", c[i][j]);
        }
        printf("\n");
    }

}
