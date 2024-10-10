#include <stdio.h>
#include <locale.h>

int main() {
   
    setlocale(LC_ALL, "Portuguese");

    int a, b;

    
    printf("Digite o valor de a: ");
    scanf("%d", &a);  

    printf("Digite o valor de b: ");
    scanf("%d", &b);  

    // Troca de valores sem usar uma variável auxiliar
    a = a + b;  // Soma os dois valores
    b = a - b;  // b se torna o valor original de a
    a = a - b;  // a se torna o valor original de b

  
    printf("Os valores trocados sao: a = %d, b = %d\n", a, b);

    return 0;
}



