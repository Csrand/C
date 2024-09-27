#include<stdio.h>
int main(){
    int n;
    printf("Par ou impar\n");
    printf("Digite um numero\n");
    scanf("%d", &n);
    printf("Seu numero e %s\n", (n % 2 == 0) ? "Par" : "Impar");
return 0;
}