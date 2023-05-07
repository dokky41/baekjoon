#include <stdio.h>

int main()
{
    int submit = 28;
    int a[31] = { 0 };
    int ss;

    for (int i = 0; i < submit; i++)
    {
        scanf("%d", &ss);
        a[ss] = ss;

    }

    for (int j = 1; j < 31; j++)
    {
        if (a[j] == 0)
        {
            printf("%d\n", j);
        }
    }


    return 0;
}