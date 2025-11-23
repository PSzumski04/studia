#include <stdio.h>

int main() {
    int n;
    int suma = 0;

    printf("Podaj n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma += i * i;
    }

    printf("Suma kwadratow od 1 do %d wynosi %d\n", n, suma);

    return 0;
}
