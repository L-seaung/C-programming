#include<stdio.h>
#define N 10

int main(){
    int i;
    int arrary[N] = {12,1, 4, 56, 43, 32, 3, 5, 7, 44};
    for(i = 0; i < N; i++){
        printf("befor:%d\n", arrary[i]);
    }
    quick_sort(arrary, 0, N-1);

    for(i = 0; i < N; i++){
        printf("after:%d\t", arrary[i]);
    }
    printf("\n");
    return 0;
}

int partition(int arrray[], int low, int high){
    int key;
    key = arrary[low];
        while (low < high){
            while (low < high && arrary[high] >= key)
                high--;
            if (low < high)
                arrary[low++] = arrary[high];
            while (low < high && arrary[low] <= key)
                low++;
            if (low < high)
                arrary[high--] = arrary[low];
        } 
    arrary[low] = key;
}

void quick_sort(int arrar[], int start, int end){
    int pos;
    if (start < end){
        pos = partition(arrary, start, end);
        quick_sort(arrary, start, pos-1);
        quick_sort(arrary, start, end);
    }
    return;
}
