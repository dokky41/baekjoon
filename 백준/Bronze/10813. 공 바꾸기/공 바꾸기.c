#include <stdio.h>

int main()
{
    int n, m,num1,num2,tap;
    // 바구니 갯수, 바꾸는 횟수
    int basket[101] = { 1 };

    scanf("%d %d", &n, &m);

    for (int i = 0; i < 101; i++)
    {
        basket[i] = i+1;
    }

    for (int j = 0; j < m; j++) 
    {
        scanf("%d %d", &num1, &num2);

        tap = basket[num1-1];
        basket[num1-1] = basket[num2-1];
        basket[num2-1] = tap;

    }

    for (int k = 0; k < n; k++)
    {
        printf("%d ", basket[k]);
    }


    return 0;
}