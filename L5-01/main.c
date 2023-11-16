#include <stdio.h>

int wspolnyDzielnik(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Wpisz pierwsza liczbe: ");
    scanf_s("%d", &num1);
    printf("Wpisz druga liczbe: ");
    scanf_s("%d", &num2);
    int dzielnik = wspolnyDzielnik(num1, num2);
    printf("Najwiekszy wspolny dzielnik %d i %d to: %d\n", num1, num2, dzielnik);

    return 0;
}
