#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);

    int n, m, t = 0, p = 0;
    for (int i = 1; i <= input; i++)
    {
        scanf("%d %d", &n, &m);
        if (n < m)
        {
            p++;
        }
        else if (m < n)
        {
            t++;
        }
        else if (n == m)
        {
            p++;
            t++;
        }
    }

    if (t < p)
    {
        printf("Pathan");
    }
    else if (p < t)
    {
        printf("Tiger");
    }
    else
    {
        printf("Draw");
    }

    return 0;
}