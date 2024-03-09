#include<stdio.h>
#include<stdlib.h>
struct Node{
                int data;
                struct Node* next;
               
                 
};

struct Node * F = NULL;
struct Node * R = NULL;

void lindedlistTraversal(struct Node* ptr){
        while(ptr != NULL){
            printf("Element : %d\n",(ptr->data));
            ptr = ptr->next;
        }
}

int isFull(struct Node* ptr){
    if(ptr == NULL){
        return 1;
    }
    return 0;
}

int isEmpty(struct Node* ptr){
    if(ptr == NULL){
        return 1;
    }
    return 0;
}

void Enqueue( int val){
        struct Node * n = (struct Node*)malloc(sizeof(struct Node));

        if(isFull(n)){
            printf("Queue is FUll\n");
        }
    
        else{ 
        n->data = val;
        n->next = NULL;

        if(F == NULL){
            F = R = n;
        }
        else{
            R->next = n;
            R = n;
        }
        }

}

int Dequeue(){
    int val = -1;
    struct Node* n = F;

    if(isEmpty(n)){
        printf("Queue is Empty\n");
    }
    
    F = F->next;
    val = n->data;
    free(n);

    return val;

}

void main(){
            Enqueue(12);
            Enqueue(24);
            Enqueue(36);
            Enqueue(48);

            lindedlistTraversal(F);

           
            
            printf("\nDequeuing Elements %d",Dequeue());
            printf("\nDequeuing Elements %d",Dequeue());
            printf("\nDequeuing Elements %d",Dequeue());
           
            
}