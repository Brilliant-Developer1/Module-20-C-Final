#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);

    int array[input][input];

    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    int flag = 1;
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            if (i == j)
            {
                if (array[i][j] != 1)
                {
                    flag = 0;
                }
                continue;
            }
            if (array[i][j] != 0)
            {
                flag = 0;
            }
        }
        //
    }
    if (flag)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
/*
5
1 0 0 0 0
0 1 0 0 0
0 0 1 0 0
0 0 0 1 0
0 0 0 0 1
*/