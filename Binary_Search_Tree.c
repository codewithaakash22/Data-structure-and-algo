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

void postOrder(struct Node* root){
    if(root != NULL){            
       postOrder(root->left);
       postOrder(root->right);
       printf("%d ",root->data); 
    }
}

void inOrder(struct Node* root){
    if(root != NULL){            
       inOrder(root->left);
       printf("%d ",root->data); 
       inOrder(root->right);
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

            struct Node* p = CreateNode(5);
            struct Node* p1 = CreateNode(3);
            struct Node* p2 = CreateNode(6);
            struct Node* p3 = CreateNode(5);
            struct Node* p4 = CreateNode(2);
            struct Node* p5 = CreateNode(9);
            struct Node* p6 = CreateNode(7);
            


            //Linking the root node with left and right children 
            p->left = p1;
            p->right = p2;

            //Linking the second node with left and right children 
            p1->left = p3;
            p1->right = p4;

            //Linking the second node with left and right children 
            p2->left = p5;
            p2->right = p6;

            printf("preOrder Traversal: ");
            PreOrder(p);
            printf("\npostOrder Traversal: ");
            postOrder(p);
            printf("\ninOrder Traversal: ");
            inOrder(p);
            
}