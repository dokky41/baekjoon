#include <stdio.h>

int main()
{
    int x, y, num;

    scanf("%d", &num);
 

    for (int i = 0; i < num; i++)
    {
        scanf("%d %d", &x, &y);

        printf("%d \n", x + y);
    }


    return 0;
}