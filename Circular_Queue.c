#include<stdio.h>
#include<stdlib.h>
struct CircularQueue{
                int size;
                int FrontEnd;
                int RearEnd;
                int * arr;
};

int isEmpty(struct CircularQueue * q){
    if(q->RearEnd == q->FrontEnd){
        return 1;
    }
    return 0;
}

int isFull(struct CircularQueue * q){
    if((q->RearEnd + 1) % q->size == q->FrontEnd){
        return 1;
    }
    return 0;
}

void Enqueue(struct CircularQueue* q, int val){
    if(isFull(q)){
        printf("CircularQueue overflow!\n");    
    }
    q->RearEnd = (q->RearEnd + 1) % q->size;  //Circular increment
    q->arr[q->RearEnd] = val;
}

int Dequeue(struct CircularQueue* q){
    if(isEmpty(q)){
        printf("CircularQueue underflow!\n");
    }
    q->FrontEnd =  (q->FrontEnd +1) % q->size; //Circular increment 
    int val = q->arr[q->FrontEnd];
    return val;
}

int main(){
            struct CircularQueue * Q = (struct CircularQueue*)malloc(sizeof(struct CircularQueue));
            Q->size = 10;
            Q->FrontEnd = Q->RearEnd = 0; 
            Q->arr = (int*)malloc(Q->size * sizeof(int));

            Enqueue(Q,12);
            Enqueue(Q,24);
            Enqueue(Q,36);
            Enqueue(Q,48);

            printf("Dequeuing element %d\n",Dequeue(Q));
            printf("Dequeuing element %d\n",Dequeue(Q));
            printf("Dequeuing element %d\n",Dequeue(Q));
            printf("Dequeuing element %d\n",Dequeue(Q));

            if(isEmpty(Q)){
                printf("Circular Queue is Empty\n");
            }

            if(isFull(Q)){
                printf("Circular Queue is Empty\n");
            }

    return 0;
}