#include <stdio.h>
#include <stdlib.h>
#include "fun.h"

//函数求最大公因数
long long gcd(long long a, long long b) {
    long long c = 1;
    if(b==0) return a;
    while(c != 0){
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}

//函数求最小公倍数
long long lcm(long long a, long long b){
    return a/gcd(a,b)*b;
}

//函数求数组的最小公倍数
long long LcmOfArr(long long *Arr, long long n){
    long long result = Arr[0];
    for(int i=1;i<n;i++){
        result = lcm(result, Arr[i]);
    }
    return result;
}

// 函数求循环的长度
int getCycleLength(int permutation[], int n, int visited[], int index) {
    int length = 0;
    int current = index;

    while (!visited[current]) {
        visited[current] = 1;
        current = permutation[current];
        length++;
    }

    return length;
}

// 函数计算循环长的和个数
void calculateCycles(int permutation[], int n) {
    int visited[n+1];
    for (int i = 0; i <= n; i++)
        visited[i] = 0;

    int cycleCounts[n+1];
    for (int i = 0; i <= n; i++)
        cycleCounts[i] = 0;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            int cycleLength = getCycleLength(permutation, n, visited, i);
            cycleCounts[cycleLength]++;
        }
    }

    
    printf("长度\t数量\n");
    for (int i = 1; i <= n; i++) {
        if (cycleCounts[i] > 0)
            printf("%d\t%d\n", i, cycleCounts[i]);
    }
    
    long long cycleorder[n],len=0;
        for(int j=0;j<n;j++){
            for (int i = 0; i <= n; i++) {
                if (cycleCounts[i] > 0) {
                    cycleorder[j] = i;
                    cycleCounts[i]--;
                    len++;
                    break;
                }
            }
            continue;
        }
    /*
    int totalLength = 0;
    for (int i = 1; i <= n; i++)
        totalLength += i * cycleCounts[i];*/
    if(len == 1) printf("总循环长度(阶): %lld\n", cycleorder[0]);
    else{
        printf("总循环长度(阶): %lld\n", LcmOfArr(cycleorder,len));
    }
}
