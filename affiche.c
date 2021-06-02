#include <stdio.h>
int affiche(){
    char buffer[80];
    scanf("%[^\n]",buffer);
    printf("%s\n",buffer);
}
int main(){
    affiche();
}