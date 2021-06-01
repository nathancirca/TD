#include <stdio.h>
int main(){
    void print_tableau(int n,int tableau[n]){
        printf("[");
        int i;
        for(i=0;i<n-1;i++){
            printf("%d;",tableau[i]);
        }
        printf("%d]\n",tableau[n-1]);
    }
    int pairs(){
        int t[50];
        int i;
        for(i=1;i<51;i++){
            t[i-1]=2*i;
        }
        print_tableau(50,t);
    }
    pairs();
}