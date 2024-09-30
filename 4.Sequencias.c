#include <stdio.h>

void sequencia_a() {
    printf("Sequência A: 1, 3, 5, 7, ");
    printf("%d\n", 9); // A próxima sequência segue somando 2.
}

void sequencia_b() {
    printf("Sequência B: 2, 4, 8, 16, 32, 64, ");
    printf("%d\n", 128); // A sequência é a multiplicação por 2.
}

void sequencia_c() {
    printf("Sequência C: 0, 1, 4, 9, 16, 25, 36, ");
    printf("%d\n", 49); // A sequência é o quadrado de números naturais (0^2, 1^2, 2^2,...).
}

void sequencia_d() {
    printf("Sequência D: 4, 16, 36, 64, ");
    printf("%d\n", 100); // A sequência é o quadrado dos números pares (2^2, 4^2, 6^2,...).
}

void sequencia_e() {
    printf("Sequência E: 1, 1, 2, 3, 5, 8, ");
    printf("%d\n", 13); // A sequência é de Fibonacci.
}

void sequencia_f() {
    printf("Sequência F: 2, 10, 12, 16, 17, 18, 19, ");
    printf("%d\n", 20); // A sequência é uma mistura de pares e ímpares consecutivos.
}

int main() {
    // Resolver as sequências
    sequencia_a();
    sequencia_b();
    sequencia_c();
    sequencia_d();
    sequencia_e();
    sequencia_f();

    return 0;
}
