#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);

    int k = 1;
    int s = input - 1;
    for (int i = 1; i <= input; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int l = 1; l <= k; l++)
        {

            if (i % 2 != 0)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
        }

        s--;
        k += 2;
        printf("\n");
    }

    return 0;
}