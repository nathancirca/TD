#include <stdio.h>
int main(){
    int nFibonacci(int n){
        if (n<2){
            return n;
        };
        int prem=0;
        int deu=1;
        int i;
        for(i=3;i<n+1;i++){
            deu=prem+deu;
            prem=deu-prem;
        };
        return deu;
    }
    printf("%d\n",nFibonacci(7));
}
