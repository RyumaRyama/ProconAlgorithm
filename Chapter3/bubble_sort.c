#include <stdio.h>
void trace(int A[], int N);
void bubbleSort(int A[], int N);


int main(){
    int  A[100],N;
    scanf("%d",&N);
    for(int i=0; i<N; i++){
        scanf("%d", &A[i]);
    }

    trace(A,N);
    bubbleSort(A,N);
    trace(A,N);
}

void trace(int A[],int N){
    for(int i=0; i<N; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void bubbleSort(int A[],int N){
    int flag = 1;
    int i = 0;
    while(flag){
        flag = 0;
        trace(A,N);
        for(int j=N-1;j>i; j--){
            if(A[j] < A[j-1]){
                int num = A[j];
                A[j] = A[j-1];
                A[j-1] = num;
                flag = 1;
            }
            trace(A,N);
        }
        printf("\n");
        printf("flag = %d\n", flag);
        i++;
    }
}

