#include<stdio.h>
#include<stdlib.h>

void printArray(int arr[], int x){
    for(int i = 0; i <x; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void BubbleSort(int *a, int n){
    int temp;
    for(int i = 0; i < n-1; i++){
        for(int j  = 0; j < n-1-i; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void BubbleSortAdaptive(int *a, int n){
    int temp;
    int isSorted = 0;
    for(int i = 0; i < n-1; i++){
        printf("Working on Pass Number %d\n",i+1);
        isSorted = 1;
        for(int j  = 0; j < n-1-i; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted){
            return;
        }
    }
}

void main(){
            int A[] = {1,42,6,3,13,2};
            int B[] = {1,2,3,4,5,6};
            int n = 6;

            /*Non-Adaptive Bubble sort Algorithm*/
            printf("Array Before Sorting.\n");
            printArray(A,n);

            BubbleSort(A,n);

            printf("Array After Sorting.\n");
            printArray(A,n);

            /* Adaptive Bubble sort Algorithm*/
            printf("\nSorted Array: ");
            printArray(B,n);

            printf("\nAfter Running Bubble sort Adaptive\n");
            BubbleSortAdaptive(B,n);

}