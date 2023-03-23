#include<stdio.h>
#include<math.h>
#define N 20

int main()
{
    int i;
    double vt[N];
    double *punt;
    *punt = vt[N];
    for(i = 0; i<N; i++)
    {
        *punt = 1 + rand()%100;
        printf("%f   ", *punt);
    }

return 0;
}