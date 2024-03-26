#include<stdio.h>
#include<malloc.h>
struct Node{
                int data;
                struct Node* left;
                struct Node* right;
};

struct Node*  createNode( int val){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = val;
    n->left = NULL;
    n->right = NULL;

    return n;
}

void inOrder(struct Node* root){
    if(root != NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}

void insert(struct Node* root, int key){
    struct Node* prev = NULL;

    while (root!=NULL)
    {
        prev = root;

        if(key == root->data){
            printf("Cannot insert %d already in BST",key);
            return;
        }

        if(key<root->data){
            root = root->left;
        }

        else{
            root = root->right;
        }
    }
    
    struct Node* new = createNode(key);
    if(key<prev->data){
        prev->left = new;
    }
    else{
        prev->right = new;
    }

}

void main(){
                struct Node* p = createNode(50);
                struct Node* p1 = createNode(40);
                struct Node* p2 = createNode(60);
                struct Node* p3 = createNode(20);
                struct Node* p4 = createNode(45);
                struct Node* p5 = createNode(55);
                struct Node* p6 = createNode(70);

                p->left = p1;
                p->right = p2;

                p1->left = p3;
                p1->right = p4;

                p2->left = p5;
                p2->right = p6;

                inOrder(p);
                printf("\n");
                
                insert(p,75);
                printf("%d ",p->right->right->right->data);
                inOrder(p);
}