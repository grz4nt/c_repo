#include <stdio.h>

void kwLiczby(int num1, int num2, int num3) {
    int liczba[] = { num1,num2,num3 };
    printf("Obliczenia:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d do kwadratu = %d\n", liczba[i], liczba[i] * liczba[i]);
    }
}

int findLow(int num1, int num2, int num3) {
    int kwadrat[] = { num1 * num1,num2 * num2,num3 * num3 };
    int lowest = kwadrat[0];
    for (int i = 1; i < 3; i++) {
        if (kwadrat[i] < lowest)
            lowest = kwadrat[i];
    }
    return lowest;
}


int main() {
    int a, b, c;
    printf("Wpisz pierwsza liczbe calkowita: ");
    scanf("%d", &a);
    printf("Wpisz druga liczbe calkowita: ");
    scanf("%d", &b);
    printf("Wpisz trzecia liczbe calkowita: ");
    scanf("%d", &c);
    int lowestValue = findLow(a, b, c);
    kwLiczby(a, b, c);
    printf("Dla podanych liczb, podniesionych do kwadratu, najnizsza wartosc to: %d\n", lowestValue);

    return 0;
}