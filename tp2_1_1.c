#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main(){
    srand((int)time(NULL));

    int i;
    int vt[N];

    for(i = 0; i < N; i++)
    {
        vt[i] = 1 + rand() % 100;
        printf("%d \n", vt[i]);
    }

    return (0);
}
