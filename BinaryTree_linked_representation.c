#include<stdio.h>
#include<malloc.h>
struct Node{
            int data;
            struct Node* left;
            struct Node* right;
};

struct Node* CreateNode(int data){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void PreOrder(struct Node* root){
    if(root != NULL){
       printf("%d ",root->data);
       PreOrder(root->left);
       PreOrder(root->right);
    }
}

void main(){
            struct Node* p = CreateNode(12);
            struct Node* p1 = CreateNode(24);
            struct Node* p2 = CreateNode(36);


            p->left = p1;
            p->right = p2;

            PreOrder(p1);
            
}