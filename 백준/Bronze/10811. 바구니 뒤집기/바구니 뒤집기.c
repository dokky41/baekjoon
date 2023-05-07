#include <stdio.h>

int main()
{
    int n, m, i,j,swap;
    //바구니 갯수, 바꾸는 횟수
    int basket[100];

    scanf("%d %d", &n, &m);


    for (int u = 1; u <= n; u++)
    {
        basket[u] = u;
    }

    while(m--)
    {
        scanf("%d %d", &i, &j);
      
            for (int o = 0; o <= (j - i) / 2; o++) 
            {
                swap = basket[i + o];
                basket[i + o] = basket[j - o];
                basket[j - o] = swap;
            }
 

    }

    for (int r = 1; r <= n; r++)
    {
        printf("%d ", basket[r]);

    }


    return 0;
}