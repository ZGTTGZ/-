#include <stdio.h>
#include <stdlib.h>
#include "fun.h"


//Logisticӳ��
int* Logistic(double x0, int m, int n, double mu){
    double X[n+1];

    for(int i=0;i<m;i++){
        x0 = (double)mu*x0*(1-x0);
    }

    X[0] = x0;
    for(int i=1;i<=n;i++){
        X[i] = (double)mu*X[i-1]*(1-X[i-1]);
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