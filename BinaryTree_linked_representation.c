#include<stdio.h>
#include<malloc.h>
struct Node{
            int data;
            struct Node* left;
            struct Node* right;
};

struct Node* CreateNode(int data){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));  // Creating a node pointer
    n->data = data;       // Setting the data 
    n->left = NULL;      // setting the left and right children to NULL
    n->right = NULL;    // setting the left and right children to NULL
    return n;          // Finally returning the created node.
}

void PreOrder(struct Node* root){
    if(root != NULL){            
       printf("%d ",root->data); 
       PreOrder(root->left);
       PreOrder(root->right);
    }
}

void main(){

            /*
            //constructing thre Root Node
            struct Node* p = (struct Node*)malloc(sizeof(struct Node));
            p->data = 12;
            p->left = NULL;
            p->right = NULL;

            //constructing the Second Node
            struct Node* p1 = (struct Node*)malloc(sizeof(struct Node));
            p1->data = 24;
            p1->left = NULL;
            p1->right = NULL;

            //constructing the  Third Node
            struct Node* p2 = (struct Node*)malloc(sizeof(struct Node));
            p2->data = 36;
            p2->left = NULL;
            p2->right = NULL;

            */

            struct Node* p = CreateNode(12);
            struct Node* p1 = CreateNode(24);
            struct Node* p2 = CreateNode(36);


            //Linking the root node with left and right children 
            p->left = p1;
            p->right = p2;

            PreOrder(p);
            
}