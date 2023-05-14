#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    int array[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%d ", &array[i]);
    }
    for (int i = 0; i < input; i++)
    {
        for (int j = i + 1; j < input; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < input; i++)
    {
        if (input % 2 == 0)
        {
            if (i == (input / 2) - 1)
            {
                printf("%d ", array[i]);
            }
            else if (i == input / 2)
            {
                printf("%d", array[i]);
            }
        }
        else
        {
            if (i == input / 2)
            {
                printf("%d", array[i]);
            }
        }
    }

    return 0;
}