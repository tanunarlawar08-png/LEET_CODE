#include<stdio.h>
#define size 100
int stack[size];
int index=-1;
void pushoperation(){
    int element;
    if(index==size-1){
        printf("stack is overflow...");
    }else{
         printf("Enter any element: ");
         scanf("%d",&element);
         index++;
         stack[index]=element;
    }
}
void popOperation(){
    if(index==-1){
        printf("Stack is empty:");
    }else{
        int n=stack[index];
        index--;
        printf("Element is deleted %d",n);
    }
}
void printstack(){
    if(index==-1){
        printf("Stack is empty...");
    }else{
        printf("Elements of stack is: ");
        for(int i=index;i>=0;i--){
            printf("%d",stack[i]);
        }printf("");
    }
}
int main(){
    int choice;
    do{
        printf("1.PUSH\n2.POP\n3.PRINT\n4.EXIT\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:pushoperation();break;
            case 2:popOperation();break;
            case 3:printstack();break;
            case 4:printf("Exit the programm...");break;
            default:printf("Invalid choice...");
        }
    }while(choice!=4);
}