#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random(int tabR[10][10], int n, int low, int high) {
    low += 1;
    high -= 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tabR[i][j] = rand() % (high - low + 1) + low;
            printf("%3d", tabR[i][j]);
        }
        printf("\n");
    }
}

void transpose(int tabR[10][10], int n) {
    int tabT[10][10];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tabT[i][j] = tabR[j][i];
            printf("%3d", tabT[i][j]);
        }
        printf("\n");
    }
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
    printf("Transpozycja macierzy:\n");
    transpose(tabR, n);
    return 0;
}
