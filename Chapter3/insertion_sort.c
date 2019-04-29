#include <stdio.h>

void trace(int [], int);
void insertSort(int *, int);

int main(){
    int N,i;
    int A[100];

    scanf("%d", &N);
    for (i = 0; i < N; i++){ 
        scanf("%d" , &A[i]);
    }

    trace(A, N);
    insertSort(&A[0], N);
    trace(A, N);
    return 0;
}

void trace(int A[],int N){
    int i;
    for (i = 0; i < N; i++){
        if(i > 0){ 
            printf(" ");
        }
        printf("%d", A[i]);
    }
    printf("\n");
}

//挿入ソート
void insertSort(int *A, int N){
    int j, i, v;
    for(i = 1; i < N; i++){
        v = *(A+i);
        printf("\nv = %d\n", v);
        trace(A,N);
        j = i - 1;
        while(j >= 0 && A[j] > v){
            A[j+1] = A[j];
            A[j] = 0;
            j--;
            trace(A,N);
        }
        A[j + 1] = v;
        trace(A,N);
    }
}

