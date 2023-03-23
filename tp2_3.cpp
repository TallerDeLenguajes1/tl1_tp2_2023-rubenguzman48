#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define N 5
#define M 7

int main()
{
    int i,j;
    int mt[N][M];
    int *punt;
    *punt = mt[N][M];

    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            *punt=1+rand()%100;
            printf("%d ", *punt);
        }
        printf("\n");
    }

return 0;
}

