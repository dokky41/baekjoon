#include <stdio.h>

int main()
{
    int n = 0; // 바구니 갯수
    int m = 0; // 던지는 횟수 
    int i=0,j=0,k = 0;

    scanf("%d %d", &n, &m);

    int b[101] = { 0 };

    for (int t = 0; t < m; t++)
    {
        scanf("%d %d %d", &i, &j, &k);

        for (int p = i; p <= j; p++)
        {
            b[p] = k;
        }

    }

    for (int y = 1; y <= n; y++)
    {
        printf("%d ", b[y]);
    }


    return 0;
}