#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, i;

    printf("Wpisz 2 liczby calkowite, aby wypisac wszystkie dodatnie liczby parzyste (wraz z 0) pomiedzy tymi liczbami.\n");
    printf("Pierwsza liczba: ");
    scanf_s("%d", &a);
    printf("Druga liczba: ");
    scanf_s("%d", &b);

    if (a == b || abs(a - b) <= 2)
        printf("Nie ma liczb parzystych pomiedzy tymi liczbami.");
    else if (a > b) {
        for (i = a-1; i > b; i--) {
            if (i % 2 == 0 && i >= 0) {
                printf("%d ", i);
            }
        }
    }
    else if (a < b) {
        for (i = a+1; i < b; i++) {
            if (i % 2 == 0 && i >= 0) {
                printf("%d ", i);
            }
        }
    }


    return 0;
}
