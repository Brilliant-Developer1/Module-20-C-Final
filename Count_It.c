#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    fgets(s, 1001, stdin);

    int capital = 0, small = 0, spaces = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            capital++;
        }
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            small++;
        }
        if (s[i] == ' ')
        {
            spaces++;
        }
    }

    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d", spaces);

    return 0;
}