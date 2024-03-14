#include<stdio.h>
#include<stdlib.h>

void printArray(int * arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void SelectionSort(int * arr, int n){
    int minofindex,temp;
    printf("Running Selection Sort....\n");
    for(int i = 0; i < n-1; i++){
        minofindex = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minofindex]){
                minofindex = j;

            }
        }
                temp = arr[i];
                arr[i] = arr[minofindex];
                arr[minofindex] = temp;

    }
}

void main(){
            int A[] = {12,3,1,5,2,9};
            int x = 6;

            printf("Array Before Sorting\n");
            printArray(A,x);

            SelectionSort(A,x);

            printf("Array After Sorting\n");
            printArray(A,x);

}