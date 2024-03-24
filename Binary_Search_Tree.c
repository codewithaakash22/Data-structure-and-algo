#include<stdio.h>
#include<malloc.h>
struct Node{
                int data;
                struct Node* left;
                struct Node* right;
};

struct Node* createNode(int val){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node)); 
    n->data = val; 
    n->left = NULL; 
    n->right = NULL;

    return n;
}

void inOrder(struct Node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}

int isBST(struct Node* root){
    static struct Node* prev = NULL;
    if(root!= NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev != NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

struct Node* search(struct Node* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    else if(key<root->data){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}

void main(){
                struct Node* p = createNode(5);
                struct Node* p1 = createNode(2);
                struct Node* p2 = createNode(7);
                struct Node* p3 = createNode(1);
                struct Node* p4 = createNode(3);
                struct Node* p5 = createNode(6);
                struct Node* p6 = createNode(9);


                p->left = p1;
                p->right = p2;

                p1->left = p3;
                p1->right = p4;

                p2->left = p5;
                p2->right = p6;


                inOrder(p);

                if(isBST(p)){ 
                printf("\nBinary search tree found\n");
                }
                else{ 
                    printf("\nBinary search tree found\n");
                }

                
                struct Node* n = search(p,1);
                
                if(n != NULL){
                    printf("Element %d found\n",n->data);
                }
                else{
                    printf("\nElement not found\n");
                }
}
