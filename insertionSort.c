#include<stdio.h>
#include<stdlib.h>

void printArray(int * arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void insertionSort(int * arr, int n){
        int key,j;

        for(int i = 1; i <= n-1; i++){
            key = arr[i];
            j = i-1;

            while(j >= 0 &&  arr[j] > key){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
}

void main(){
            int A[] = {12,53,1,5,2,9};
            int x = 6;

            printf("Array Before Sorting\n");
            printArray(A,x);

            insertionSort(A,x);

            printf("Array After Sorting\n");
            printArray(A,x);

}