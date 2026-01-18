#include <stdio.h>

int main() {
    float a; //scanf deve ser %f para 1 casa decimal
    float b; // scanf deve ser %.2f p/ 2 casas decim
    
    float soma;
    float adicao;
    
    float diferenca;
  float subtracao;
    
    float produto;
    float multiplicacao;
    
    float quociente;
    float divisao;

    printf("Digite um número decimal para operacoes aritmeticas: \n");
    scanf("%f", &a); // %f ler numeros decimais
    // %d apenas para numeros inteiros = int

    printf("Digite outro número e aguarde o resultado:\n ");
    scanf("%f", &b); //%f ler numeros decimais

    soma = a + b;
    adicao = soma;
    
    diferenca = a - b;
    subtracao = diferenca;
    
    produto = a * b;
    multiplicacao = produto;
    
    quociente = a / b;
    divisao = quociente;

    printf("Resultado da adicao (Soma): %.2f\n\n", soma);
    
    printf("Resultado da subtracao (Diferença): %.2f\n\n", diferenca); // no printf controla quantidade de casas decimais exemplo %.2f (2 casas decimais) f = float 
    
    printf("Resultado da multiplicacao (Produto): %.2f\n\n", produto); //printf controla as casas decimais
    
    printf("Resultado da divisal (Quociente): %.2f\n\n", quociente); // para usar numero inteiro int printf e scanf deve ser %d (d=int)

    return 0;
}