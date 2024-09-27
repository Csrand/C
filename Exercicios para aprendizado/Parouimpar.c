#include<stdio.h>
int main(){
    int n;
    printf("Par ou impar\n");
    printf("Digite um numero\n");
    scanf("%d", &n);
    if (n % 2 == 0){
    printf("Seu numero e par\n");
    }
    else{
    printf("Seu numero e impar\n");
    }
return 0;

}