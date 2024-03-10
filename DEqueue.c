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

void EnqueueF(struct Queue* F, int val){
    if(isFull(F)){
        printf("Queue overflow!\n");    
    }
    F->arr[F->FrontEnd] = val;
    F->FrontEnd--;
}

void EnqueueR(struct Queue* R, int val){
    if(isFull(R)){
        printf("Queue overflow!\n");    
    }
    R->RearEnd++;
    R->arr[R->RearEnd] = val;
}

int DequeueR(struct Queue* R){
    if(isEmpty(R)){
        printf("Queue underflow!\n");
    }
    int val = R->arr[R->RearEnd];
    R->RearEnd--;
    return val;
}

int DequeueF(struct Queue* F){
    if(isEmpty(F)){
        printf("Queue underflow!\n");
    }
    F->FrontEnd++;
    int val = F->arr[F->FrontEnd];
    return val;
}

int main(){
            struct Queue * Q = (struct Queue*)malloc(sizeof(struct Queue));
            Q->size = 10;
            Q->FrontEnd = Q->RearEnd = -1;
            Q->arr = (int*)malloc(Q->size * sizeof(int));

            EnqueueR(Q,12);
            EnqueueR(Q,24);
            EnqueueR(Q,36);
            EnqueueR(Q,48);

            printf("Dequeuing element %d\n",DequeueF(Q));
            printf("Dequeuing element %d\n",DequeueF(Q));

            printf("Dequeuing element %d\n",DequeueR(Q));

            EnqueueF(Q,4);
            EnqueueF(Q,5);

            printf("Dequeuing element %d\n",DequeueF(Q));
            printf("Dequeuing element %d\n",DequeueF(Q));
            printf("Dequeuing element %d\n",DequeueF(Q));
            
    return 0;
}