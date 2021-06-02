#include <stdio.h>
void print_tableau(int n,int tableau[]){
    printf("[");
    int i;
    for(i=0;i<n-1;i++){
        printf("%d;",tableau[i]);
    }
    printf("%d]\n",tableau[n-1]);
}
int sommeTab(int t1[], int t2[],int n){
    int t[n];
    for(int i=0;i<n;i++){
        t[i]=t1[i]+t2[i];
    }
    print_tableau(5,t);
}

int main(){
    int t1[5] = {1,2,3,4,5};
    int t2[5] = {5,4,3,2,1};
    sommeTab(t1,t2,5);
}