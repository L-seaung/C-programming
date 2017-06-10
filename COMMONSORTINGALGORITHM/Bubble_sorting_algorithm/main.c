#include<stdio.h>
# define N 10 

int main(){
    int array[N] = {3, 6, 7, 9, 34, 12, 44, 1, 23};
    bubblesort(arrary, N);
}

int bubblesort(array[], N){
    int i,j;
    int temp;
    for(i = 0; i < N; i++){
        for(j = i; j < N; j++){
            if(arrary[i] > arrary[j]){
                temp = arrary[i];
                arrary[i] = arrary[j];
                arrary[j] = temp;
            }
        }
    }

    for(i = 0; i < N; i++){
        printf("sort: %d\n", arrary[i]);
    }
}

