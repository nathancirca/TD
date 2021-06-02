#include <stdio.h>
int recu(int prem, int deu,int n);
int fiboRec(int n);

int main(){
    printf("%d\n",fiboRec(8));
}

int fiboRec(int n){
    if (n<3){
        return n-1;
    }
    n=n-3;
    return recu(0,1,n);
}
int recu(int prem, int deu,int n){
    if(!n){
        return prem+deu;
    }
    n--;
    deu=prem+deu;
    prem=deu-prem;
    return recu(prem,deu,n);
}