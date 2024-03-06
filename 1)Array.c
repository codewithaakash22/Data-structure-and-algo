// #include<stdio.h>
// #include<stdlib.h>

// struct myArray{
//                 int total_size;
//                 int used_size;
//                 int *ptr;

// };

// void createmyArray(struct myArray* a,int tsize, int usize){
//         a->total_size = tsize;
//         a->used_size = usize;
//         a->ptr = (int*)malloc(tsize*sizeof(int));
// }

// void setval(struct myArray* a){
//     int n;
//     for(int i = 0; i < a->used_size; i++){
//         printf("Enter an element: ");
//         scanf("%d",&n);
//         (a->ptr)[i] = n;
//     }
// }

// void show(struct myArray* a){
//     for(int i = 0; i< a->used_size; i++){
//         printf("%d ",(a->ptr)[i]);
//     }
// }

// int main(){
//             struct myArray marks;
//             createmyArray(&marks,10,5);
//             printf("Running setval\n");
//             setval(&marks);
//             show(&marks);
//     return 0;
// }

// #include<stdio.h>
// void show(int arr[],int n){
//     for(int i = 0; i< n; i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }

// int indInsertion(int arr[], int size, int capacity, int index, int element){
//     //code for insertion
//     if(size>=capacity){
//         return -1;
//     }
//     for(int i = size-1; i>=index; i--){
//         arr[i+1] = arr[i];
//     }
//     arr[index] = element;
//     return 1;
// }

// int main(){
//             int arr[100] = {12,43,22,56,64};
//             int size = 5, element = 45, index = 3;
//             show(arr,size);
//             indInsertion(arr,size,100,index,element);
//             size+=1;
//             show(arr,size);
//         return 0;
// }

// #include<stdio.h>
// void show(int arr[],int n){
//     for(int i = 0; i< n; i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }

// void indDeletion(int arr[], int size, int index){
//     for(int i = index; i <size-1; i++){
//         arr[i] = arr[i+1];
//     }
// }

// int main(){
//             int arr[100] = {12,43,22,56,64};
//             int size = 5, element = 45, index = 3;
//             show(arr,size);
//             indDeletion(arr,size,index);
//             size-=1;
//             show(arr,size);
//         return 0;
// }

#include<stdio.h>
int linearsearch(int arr[],int size, int element){
    for(int i = 0; i < size; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}

int binarysearch(int arr[],int size, int element){
    int low,mid,high;
    low = 0;
    high  = size-1;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid] == element){
            return mid;
        }

        if(arr[mid] > element){
            high = mid-1;
        }

        else{
            low = mid+1;
        }
    }
    return -1;
}

int main(){
            // int arr[100] = {12,43,22,56,64};
            // int size = 5, element = 43;
            // int searchresult = linearsearch(arr,size,element);
            // printf("The element is found at index %d\n",searchresult);

            int arr[100] = {1,2,3,4,5,6,7,8,9};
            int size = 8, element = 5;
            int searchresult = binarysearch(arr,size,element);
            printf("The element is found at index %d\n",searchresult);


        return 0;
        
}