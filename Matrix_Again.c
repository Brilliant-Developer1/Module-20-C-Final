#include <stdio.h>
#include <string.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int array[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if (i == row - 1)
            {
                printf("%d ", array[i][j]);
            }
        }
    }
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        printf("%d ", array[i][col - 1]);
    }

    return 0;
}
/*
00 01 02 03
10 11 12 13
20 21 22 23






3 4
1 2 3 4
5 6 7 8
6 5 4 2
*/