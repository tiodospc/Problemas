#include <stdio.h>

int main(){
    
    int N, A[100000], B[100000], C[100000], i;
    
    scanf("%d", &N);
    
    for(i = 0; i<N; i++){
        scanf("%d", &A[i]);
    }
    for(i = 0; i<N; i++){
        scanf("%d", &B[i]);
    }
    
    for(i=0;i<N;i++){
        C[i] = A[i] + B[i]; 
    }
    
    for(i=0;i<N;i++){
    printf("%d ", C[i]);
    }

    
    return 0;
}
