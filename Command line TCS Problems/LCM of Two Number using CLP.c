#include <stdio.h>
#include<stdlib.h>

int gcd(int a, int b){
    if(a==0) return 0;
    else return(b%a,a);
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}

int main(int argc,char *argv[]){
   int x=atoi(argv[1]);
    int y=atoi(argv[2]);
   printf("%d",lcm(x,y));
    return 0;
}
