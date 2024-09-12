#include <stdio.h>

int isFibonacci(int num) {
    int a = 0, b = 1, temp;
    if (num == 0 || num == 1) return 1;

    while (b < num) {
        temp = b;
        b = a + b;
        a = temp;
    }

    return b == num;
}

int main() {
    int num;
    printf("Informe um número: ");
    scanf("%d", &num);

    if (isFibonacci(num)) {
        printf("%d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}
