#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
int n = 5;
int tabl[5][5];
int i, j, k;

void tablica() {
    printf("Wpisz 25 liczb calkowitych z zakresu <-5,10) i bez 0.\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            do {
                printf("Liczba %d/%d: ", i * n + j + 1, n * n);
                scanf_s("%d", &tabl[i][j]);
                if (tabl[i][j] < -5 || tabl[i][j] >= 10 || tabl[i][j] == 0) {
                    printf("%d nie lezy w wymaganym zakresie.\n", tabl[i][j]);
                }
            } while (tabl[i][j] < -5 || tabl[i][j] >= 10 || tabl[i][j] == 0);
        }
    }
    printf("\n");
    printf("Tablica 5x5:\n");
    for (k = 0; k < n; k++) {
        printf(" #%d", k+1);
    }
    printf("\n---------------\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%3d", tabl[i][j]);
        printf("\n");
    }
}

void kolumna() {
    int s;
    int suma = 0;
    printf("Wybierz kolumne dla ktorej obliczyc sume jej elementow: ");
    scanf_s("%d", &s);
    for (int i = 0; i < n; i++) {
        suma += tabl[i][s-1];
    }
    printf("Suma elementow w kolumnie #%d = %d\n", s, suma);
}

int main() {
    tablica();
    printf("\n");
    kolumna();
    return 0;
}
