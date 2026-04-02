#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int addition=0;
    for(int i=0;i<size;i++){
      addition=addition+a[i];
    }
    printf("%d",addition);
}