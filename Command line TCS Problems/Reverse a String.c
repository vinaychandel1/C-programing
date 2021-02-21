#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *stringreverse(char input[]){
    int length=strlen(input);
    char *reversestring=(char *)malloc(length*sizeof(char));
    int j=0;
    for ( int i=length-1;i>=0;i--) {
        reversestring[j]=input[i];
        j++;
    }
    return reversestring;
}

int main(int argc,char *argv[]){
    if(argc==1)
        printf("No Input");
        else
       printf("%s\n", stringreverse(argv[1])); 
    
    
    return 0;
}
