#include<stdio.h>
#include<stdlib.h>
struct Node{
            int data;
            struct Node* next;
};

void linkedlistTraversal(struct Node* ptr){
    while(ptr!=NULL){
        printf("Element : %d\n",ptr->data);
        ptr = ptr->next;
    }
}

struct Node* insertFirst(struct Node* head,int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct Node* insertAtindex(struct Node* head,int data,int index){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node* p = head;
    int i = 0;

    while(i != index-1){
        p = p->next;
        i++;
    }

    ptr->next =  p->next;
    p->next = ptr;
    return head;
}

struct Node* insertEnd(struct Node* head, int data){
    struct Node* p = head;
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    while (p->next != NULL)
    {
        p = p->next;
    }

    ptr->next = p->next;
    p->next = ptr;

    return head;
}

struct Node* insertAfterNode(struct Node* head, int data, struct Node* X){
        struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
        ptr->data = data;
        ptr->next = X->next;
        X->next = ptr;

        return head;
}

struct Node* DeleteFirst(struct Node* head){
        struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
        ptr = head;
        head = head->next;
        free(ptr);
        return head;

}

struct Node* DeleteAtindex(struct Node* head, int index){
        struct Node* p = head;
        struct Node* q = head->next;
        int i = 0;
        while(i!=index-1){
            p = p->next;
            q = q->next;
            i++;
        }
        p->next = q->next;
        free(q);
        return head;
        
}

struct Node* DeletionEnd(struct Node* head){
        struct Node* p = head;
        struct Node* q = head->next;

        while(q->next != NULL){
            p = p->next;
            q = q->next;
        }

        p->next = q->next;
        free(q);
        return head;

}

struct Node* DeletionAfterNode(struct Node* head, int value){
                struct Node* p = head;
                struct Node* q = head->next;

                while(q->data != value && q->next != NULL){
                    p = p->next;
                    q = q->next;
                }

                if(q->data == value){
                    p->next = q->next;
                    free(q);
                }

                return head;
}

void main(){

            struct Node* head;
            struct Node* second;
            struct Node* third;
            struct Node* fourth;   

            head = (struct Node*)malloc(sizeof(struct Node));
            second = (struct Node*)malloc(sizeof(struct Node));
            third = (struct Node*)malloc(sizeof(struct Node));
            fourth = (struct Node*)malloc(sizeof(struct Node));

            head->data = 7;
            head->next = second;

            second->data = 10;
            second->next = third;

            third->data = 24;
            third->next = fourth;

            fourth->data = 89;
            fourth->next = NULL;

            // printf("Linkedlist Before insertion\n");
            // linkedlistTraversal(head);

            // head = insertFirst(head,45);
            // head = insertAtindex(head,34,3);
            // head = insertEnd(head,12);
            // head = insertAfterNode(head,6,third);

            // printf("Linkedlist After insertion\n");
            // linkedlistTraversal(head);

            printf("\nLinkedlist Before Deletion\n");
            linkedlistTraversal(head);

            // head = DeleteFirst(head);
            // head = DeleteAtindex(head,2);
            // head = DeletionEnd(head);
            head = DeletionAfterNode(head,10);

            printf("\nLinkedlist After Deletion\n");
            linkedlistTraversal(head);
}
