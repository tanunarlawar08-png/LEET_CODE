#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    gets(s);
    int i=0,j=strlen(s)-1,check=1;
    while(i<j){
        if(s[i]!=s[j]){
            check=0;break;
        }
        i++;j--;
    }
    if(check){printf("its a pallindrome");}
    else{
        printf("Not a pallindrome");
    }
}