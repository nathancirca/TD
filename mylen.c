#include <stdio.h>
int mylen(char s[]){
    int res=0;
    while(s[res]){
        res++;
    }
    return res;
}

int main(){
    printf("%d\n",mylen("abcdefg"));
}