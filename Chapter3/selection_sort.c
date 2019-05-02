#include<stdio.h>

int selectionSort(int A[], int N);
void trace(int A[], int N);

int main(){
    int A[100], N, i, sw;
    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%d", &A[i]);
    }
    printf("\n");
    sw = selectionSort(A,N);

    for(i=0; i<N; i++){
        if(i>0){
            printf(" ");
        }
        printf("%d", A[i]);
    }
    printf("\n");
    printf("スワップ数 = %d\n", sw);

    return 0;
}

void trace(int A[], int N){
    for(int i=0; i<N; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

/* 選択ソート */
int selectionSort(int A[], int N){
    int i, j, t, sw=0, minj;
    for(i=0; i<N-1; i++){
        minj = i;
        for(j=i; j<N; j++){
            if(A[j] < A[minj]){
                minj = j;
                printf("%d\n", A[minj]);
            }
        }
        t = A[i]; 
        A[i] = A[minj]; 
        A[minj] = t;
        if(i != minj) sw++;
        trace(A,N);
    }
    return sw;
}

