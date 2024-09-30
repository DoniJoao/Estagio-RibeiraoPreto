 #include <stdio.h>

int pertenceFibonacci(int n) {
    int a = 0, b = 1, c = 0;
    
    if (n == 0 || n == 1) {
        return 1;
    }

    while (c < n) {
        c = a + b;
        a = b;
        b = c;
    }

    if (c == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (pertenceFibonacci(numero)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}
