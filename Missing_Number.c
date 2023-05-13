#include <stdio.h>

int fun(int s, int a, int b, int c)
{
    int sum = a + b + c;
    int count = 0;

    for (int i = sum; i < s; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    int input;
    scanf("%d", &input);

    for (int i = 0; i < input; i++)
    {
        int s, a, b, c;
        scanf("%d %d %d %d", &s, &a, &b, &c);
        int ans = fun(s, a, b, c);

        printf("%d\n", ans);
    }

    return 0;
}