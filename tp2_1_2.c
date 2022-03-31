#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main(){
    srand((int)time(NULL));

    int i;
    int *p;
    int vt[N];
    
    p = &vt[0];

    for(i = 0; i < N; i++)
    {
        *p = 1 + rand() % 100;

        printf("%d \n", *p);

        p++;

    }

    return (0);
}