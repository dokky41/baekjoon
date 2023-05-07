#include <stdio.h>

int main()
{
    int a = 0,x = 0,y=0;
    
    scanf("%d %d", &x, &a);

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &y);

        if (a > y)
        {
            printf("%d ", y);
        }
    }

    return 0;
}