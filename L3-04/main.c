#include <stdio.h>

int main() {
    int n;
    double ulamek;
    double suma = 0;
    char wybor;
    do {
        printf("Ten program wypisuje elementy oraz sume szeregu liczb dla podanego 'n'\n");
        printf("\nWpisz liczbe n: ");
        scanf_s("%d", &n);

        for (int i = 1; i <= n; i++) {
            ulamek = 1.0 / i;
            suma += ulamek;
            printf("1/%d = %f\n", i, ulamek);
        }
        printf("Suma elementow to: %.10f\n", suma);
        printf("\nCzy chcesz uruchomic program jeszcze raz? [t/n]: ");
        scanf_s(" %c", &wybor, sizeof(wybor));
        suma = 0;
    } while (wybor == 't' || wybor == 'T');
    return 0;
}
