#include <stdio.h>

int main() {
    char nome[50];
    int idade;

    printf("Digite o seu nome: ");
    scanf("%s", nome);
    
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
