#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* createnode(int value){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
int main(){
    struct Node* root=createnode(10);
    root->left=createnode(20);
    root->right=createnode(30);
    root->left->left=createnode(40);
    root->left->right=createnode(50);
    printf("Tree created succesfully");
}