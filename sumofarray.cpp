//sum of array elements
//1,2,3,4,5==>15
#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int addition=0;
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
       addition=addition+a[i];
    }
    printf("Addition = %d",addition);
}