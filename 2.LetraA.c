#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Defina o tamanho máximo da string
    int contador = 0;

    // Entrada de dados
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);  // Lê a string incluindo espaços

    // Verificação da ocorrência de 'a' ou 'A'
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            contador++;
        }
    }

    if (contador > 0) {
        printf("A letra 'a' aparece %d vezes.\n", contador);
    } else {
        printf("A letra 'a' não aparece na string.\n");
    }

    return 0;
}
