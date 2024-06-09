#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fun.h"

//Singer”≥…‰
int* Singer(double x0, int m, int n, double a){
    double X[n+1];

    for(int i=0;i<m;i++){
        x0 = (double)a*(7.86*x0-23.31*pow(x0,2)+28.75*pow(x0,3)-13.302875*pow(x0,4));
    }

    X[0] = x0;
    for(int i=1;i<=n;i++){
        X[i] = (double)a*(7.86*X[i-1]-23.31*pow(X[i-1],2)+28.75*pow(X[i-1],3)-13.302875*pow(X[i-1],4));
    }

    int *permutation = (int *)malloc(sizeof(int)*n);
    for (int i=1;i<=n;i++){
        permutation[i-1] = i;
    }

    double t;
    int t1,min;
    for(int i=1;i<=n;i++){
        min = 1;
        for(int j=1;j<=n;j++){
            if(X[j]<X[min]){
                min = j;
            }
        }
        permutation[min-1] = i;
        X[min] = 1;        
    }
    return permutation;
}