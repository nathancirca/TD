#include <stdio.h>
int main(){
    int addone(int x){
        x=x+1;
        return x;
    }
    printf("%d\n",addone(3));
}