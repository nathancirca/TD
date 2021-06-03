#include <stdio.h>

int mylen(char* s) {
    int res = 0;
    while (*s++) {
        res++;
    }
    return res;
}

int main() {
    char* s = "abc";
    printf("%d", mylen(s));
}