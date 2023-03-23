#include <stdlib.h>
#include <stdio.h>

#define N 20
/* int i; */
double vt[N];
int main(){
    for(int i = 0;i<N; i++)
    {
        vt[i]=1+rand()%100;
        printf("posicion %d: %2.f\n",i,vt[i]);
    }
    
}
