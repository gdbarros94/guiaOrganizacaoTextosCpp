# Guia de Organização de Textos com printf no C++

Neste guia, vamos aprender técnicas e métodos para organizar os prints no terminal utilizando o comando printf em C++. Vamos abordar regras para deixar o código padronizado e bonito, além de instruções detalhadas para cada item.

## 1. Instruções Básicas

Sempre que utilizar um comando scanf, é importante precedê-lo com um printf para instruir o usuário sobre o que digitar.
Utilize dois pontos seguidos de espaço (": ") para separar a instrução do comando de entrada do usuário.
Comece as frases com letra maiúscula para manter a consistência e clareza.

    ```
    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    ```

## 2. Formatação de Texto

Utilize \n para quebrar linhas e \t para criar tabulações, garantindo uma melhor visualização do texto.
Utilize coringas como %d, %s, %f para formatar os valores que serão impressos.


    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);

## 3. Colorindo Texto no Terminal

É possível colorir o texto no terminal utilizando códigos de escape ANSI.
    Use  **\033[** seguido do código de cor desejado, seguido de m para mudar a cor.
    Os códigos de cores mais comuns são:
        31 para vermelho
        32 para verde
        33 para amarelo
        34 para azul
        35 para magenta
        36 para ciano

    printf("\033[31mErro: Valor inválido!\033[0m\n");

## 4. Formatação de Texto com ASCII Art

Você pode criar desenhos ou mensagens utilizando caracteres ASCII.
Utilize tabelas ASCII ou ferramentas online para criar seus desenhos.

    printf("  /\\_/\\ \n");
    printf(" ( o.o )\n");
    printf("  > ^ < \n");

## Exemplo completo

```
#include <stdio.h>

int main() {
    char nome[50];
    int idade;

    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("\nInformacoes do Usuario:\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);

    printf("\n\033[32mParabens!\033[0m Voce cadastrou suas informacoes com sucesso!\n");

    printf("\nASCII Art:\n");
    printf("  /\\_/\\ \n");
    printf(" ( o.o )\n");
    printf("  > ^ < \n");

    return 0;
}

```

## Exercício:

    Crie um programa que solicite ao usuário seu nome, idade e cor favorita. Em seguida, imprima essas informações com mensagens coloridas no terminal, e utilize ASCII Art para adicionar um elemento visual ao final do programa.