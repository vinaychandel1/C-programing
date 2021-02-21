#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
void stringreverse(char input[]){
    int length=strlen(input)-1;
    int l=0;
    while(length>l){
        if(input[length--]!=input[l++]){
            printf("Not Palindrome");
            return;
        }
    }
      printf("Palindrome");
        return;
   
}
int main(int argc,char *argv[]){
    if(argc==1)
        printf("No Input");
        else
       stringreverse(argv[1]);
    
   return 0;
}
