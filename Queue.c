#include<stdio.h>
#include<stdlib.h>
struct Queue{
                int size;
                int FrontEnd;
                int RearEnd;
                int * arr;
};

int isEmpty(struct Queue * q){
    if(q->FrontEnd == q->RearEnd){
        return 1;
    }
    return 0;
}

int isFull(struct Queue * q){
    if(q->RearEnd == q->size-1){
        return 1;
    }
    return 0;
}

void Enqueue(struct Queue* q, int val){
    if(isFull(q)){
        printf("Queue overflow!\n");
    }
    q->RearEnd++;
    q->arr[q->RearEnd] = val;
}

int Dequeue(struct Queue* q){
    if(isEmpty(q)){
        printf("Queue underflow!\n");
    }
    q->FrontEnd++;
    int val = q->arr[q->FrontEnd];
    return val;
}

int main(){
            struct Queue * Q = (struct Queue*)malloc(sizeof(struct Queue));
            Q->size = 10;
            Q->FrontEnd = Q->RearEnd = -1;
            Q->arr = (int*)malloc(Q->size * sizeof(int));

            Enqueue(Q,12);
            Enqueue(Q,24);
            Enqueue(Q,36);
            Enqueue(Q,48);

            printf("Dequeuing element %d\n",Dequeue(Q));
            printf("Dequeuing element %d\n",Dequeue(Q));
            printf("Dequeuing element %d\n",Dequeue(Q));

    return 0;
}