// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col); // prothom e row ,col input
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]); // array scanf kora
        }
        printf("\n");
    }

    int ShesRow = row - 1;

    for (int j = 0; j < col; j++)
    {
        printf("%d ", a[ShesRow][j]);
    }
    printf("\n");

    int ShesCol = col - 1;
    for (int i = 0; i < row; i++)
    {
        printf("%d ", a[i][ShesCol]);
    }

    return 0;
}