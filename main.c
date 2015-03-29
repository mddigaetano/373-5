//Author: amedeo39

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void CountingSort(int v[],int n,int NewV[]){
    int i,j,min;
    
    for(i=0;i<n;i++){
        min=0;
        for(j=0;j<n;j++){
            if(v[j]<v[i])
                min++;
        }
        NewV[min]=v[i];
    }
}

int main(int argc, char** argv) {
    int Vsorted[N];
    int i,v[N];
    
    srand(time(NULL));
    
    for(i=0;i<N;i++){
        v[i]=(rand()%100)+1;
        printf("Vettore [%d]: %d\n",i,v[i]);
    }
    
    CountingSort(v,N,Vsorted);
    
    for(i=0;i<N;i++){
        printf("\nVettore ordinato [%d]: %d",i,Vsorted[i]);
    }

    return (EXIT_SUCCESS);
}