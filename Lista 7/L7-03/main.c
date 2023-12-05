#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random(int tabR[10][10], int n, int low, int high) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tabR[i][j] = rand() % (high - low + 1) + low;
            printf("%3d", tabR[i][j]);
        }
        printf("\n");
    }
}

void przekatna(int tabR[10][10], int n) {
    int suma1 = 0;
    int suma2 = 0;
    for (int i = 0, j = n - 1; i < n && j >= 0; i++, j--) {
        suma1 += tabR[i][i];
        suma2 += tabR[i][j];
    }
    printf("Pierwsza przekatna: %d\n", suma1);
    printf("Druga przekatna: %d\n", suma2);
    printf("Suma przekatnych macierzy: %d\n", suma1 + suma2);
}

int main() {
    int n;
    int tabR[10][10];
    srand(time(NULL));
    printf("Wpisz n: ");
    scanf_s("%d", &n);
    printf("Losowa macierz %dx%d\n", n, n);
    random(tabR, n, -10, 10);
    printf("\n");
    przekatna(tabR, n);
    return 0;
}
