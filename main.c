#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fun.h"
#include "Logistic.h"
#include "Singer.h"
#include "Sine.h"

#define M (1000)
#define N (700)
#define IV 0.5

int main() {
    
    int permutation[] = {0,4,3,2,5,7,6,1};//����ĵ�0λ��Ч,�ӵ�1λ��ʼ�����ұ�
    
    printf("�������ұ��ѭ���������:\n");
    calculateCycles(permutation, 7);
    
    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*
    int* temp = Sine(0.1, M, N, 0.99);
    int permutation[N+1];
    for(int i=0;i<N;i++){
        permutation[i+1] = *(temp+i);
    }

    printf("�������ұ��ѭ���������:\n");
    calculateCycles(permutation, N);

    temp = Sine(0.2, M, N, 0.99);
    for(int i=0;i<N;i++){
        permutation[i+1] = *(temp+i);
    }

    printf("�������ұ��ѭ���������:\n");
    calculateCycles(permutation, N);

    temp = Sine(0.3, M, N, 0.99);
    for(int i=0;i<N;i++){
        permutation[i+1] = *(temp+i);
    }

    printf("�������ұ��ѭ���������:\n");
    calculateCycles(permutation, N);

    temp = Sine(0.4, M, N, 0.99);
    for(int i=0;i<N;i++){
        permutation[i+1] = *(temp+i);
    }

    printf("�������ұ��ѭ���������:\n");
    calculateCycles(permutation, N);

    temp = Sine(0.5, M, N, 0.99);
    for(int i=0;i<N;i++){
        permutation[i+1] = *(temp+i);
    }

    printf("�������ұ��ѭ���������:\n");
    calculateCycles(permutation, N);

    return 0;
    */
}
