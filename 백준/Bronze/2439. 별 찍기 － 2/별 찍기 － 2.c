#include <stdio.h>

int main()
{
    int num = 0;

    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {

        for (int j = 1; j < num-i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k <= i; k++)
        {
            printf("*");
        }
       
            printf("\n");
        
    }


}

