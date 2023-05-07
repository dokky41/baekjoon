#include <stdio.h>

int main()
{
    int n = 1; //과목 갯수
    int m=0; //과목 최댓값
    float avg=0;

    scanf("%d", &n);

    int subject[1000];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&subject[i]);

        if (m < subject[i])
        {
            m = subject[i];
        }
    }

    for (int k = 0; k < n; k++)
    {
        avg = avg + (float)subject[k] / m * 100;
    }

    printf("%f\n", avg / n);

    return 0;
}