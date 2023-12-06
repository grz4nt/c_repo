#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void macierz(float tabR[5][5], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j)
                printf("  -  ");
            else {
                tabR[i][j] = ((float) rand() / ((float)RAND_MAX)) * 10;
                printf("%5.2f", tabR[i][j]);
            }
        }
        printf("\n");
    }
}


int main() {
    int n = 5;
    float tabR[5][5];
    srand(time(NULL));
    printf("Losowa macierz gornotrojkatna %dx%d:\n", n, n);
    macierz(tabR, n);
    return 0;
}