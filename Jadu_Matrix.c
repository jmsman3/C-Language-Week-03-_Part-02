// Online C compiler to run C program online
#include <stdio.h>

int main()
{

    int row, col, i, j;
    scanf("%d %d", &row, &col); //row , col input neya
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);  //2d aray input nelam
        }
    }
    int flag = 1;
    if (row != col)
    {
        flag = 0; // square kina check
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if ((i == j || i + j == row - 1) && a[i][j] != 1)
            {
                flag = 0;
                break;
            }
            if (i != j && i + j != row - 1 && a[i][j] != 0) 
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}