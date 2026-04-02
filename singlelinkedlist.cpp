//write a singlelinkedlist implementation in C language
#include<stdio.h>
#include<stdlib.h>
struct Node{
      int value;
      struct Node* link;
};
struct Node* Start=NULL;
//memory allocate ==> NODE
struct Node* createnode(){
    struct Node *Nodesize;
    Nodesize=(struct Node*)malloc(sizeof(struct Node));
    return Nodesize;
}
void insertNode(){
    struct Node *temp,*temp2;
    temp=createnode();
    printf("Enter any number:");
    scanf("%d",&temp->value);
    temp->link=NULL;
    if(Start==NULL){Start=temp;}
    else{
        temp2=Start;
        while(temp2->link!=NULL){
            temp2=temp2->link;}
        temp2->link=temp;
    }
}

void delete_node(){
    struct Node* deletevalue;
    if(Start==NULL){printf("List is empty:");}
    else{
        deletevalue=Start;
        Start=Start->link;
        free(deletevalue);
        // while(deletevalue!=NULL){
        //     printf("%d",deletevalue->value);
        // }
    }
}
void print_list(){
    struct Node* t1;
    if(Start==NULL){printf("list is empty:");}
    else{
        t1=Start;
        while(t1!=NULL){
            printf("%d",t1->value);
            t1=t1->link;
        }
    }
}
int check_menus(){
    int choice;
    printf("\n1.ADD\n2.Delete\n3.Print\n4.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    return choice;
}
int main(){
    while(1){
        switch(check_menus()){
            case 1:insertNode();break;
            case 2:delete_node();break;
            case 3:print_list();break;
            case 4:exit(0);
            default:printf("invalid choice...");
        }
    }
}



