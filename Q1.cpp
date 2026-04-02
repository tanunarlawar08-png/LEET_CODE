#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);//space allowed
    int vowels=0,consonant=0;
    for(char ch:str){
        if(isalpha(ch)){
            char ch2=tolower(ch);
            if(ch2=='a'||ch2=='e'||ch2=='i'||ch2=='o'||ch2=='u') vowels++;
            else consonant++;
        }}
    cout<<"Vowels = "<<vowels<<endl;
    cout<<"Consonant = "<<consonant<<endl;
}