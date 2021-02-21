#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
bool stringreverse(char input[]){
    int length=strlen(input);
    //char *reversestring=(char *)malloc(length*sizeof(char));
    for ( int i=0;i<=length/2;i++) {
       if(input[i]!=input[length-1-i]){
           return false;
       }
       else
       return true;
    } 
}
int main(int argc,char *argv[]){
    bool c;
    if(argc==1)
        printf("No Input");
        else
       c=stringreverse(argv[1]);
       cout<<c;
   return 0;
}
