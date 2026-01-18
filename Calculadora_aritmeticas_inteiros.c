#include <stdio.h>

int main() {
    int a;
    int b;
    
    int soma;
    int adicao;
    
    int diferenca;
    int subtracao;
    
    int produto;
    int multiplicacao;
    
    int quociente;
    int divisao;

    printf("Digite um número operacoes aritmeticas: \n");
    scanf("%d", &a);

    printf("Digite outro número e aguarde o resultado:\n ");
    scanf("%d", &b);

    soma = a + b;
    adicao = soma;
    
    diferenca = a - b;
    subtracao = diferenca;
    
    produto = a * b;
    multiplicacao = produto;
    
    quociente = a / b;
    divisao = quociente;

    printf("Resultado da adicao (Soma): %d\n\n", soma);
    
    printf("Resultado da subtracao (Diferença): %d\n\n", diferenca);
    
    printf("Resultado da multiplicacao (Produto): %d\n\n", produto);
    
    printf("Resultado da divisal (Quociente): %d\n\n", quociente);

    return 0;
}