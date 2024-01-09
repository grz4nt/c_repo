#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i, j;
    char tab[50];
    int rozmiar = sizeof(tab) / sizeof(tab[0]);
    for (i = 0; i < rozmiar; i++) {
        tab[i] = rand() % ('z' - 'a' + 1) + 'a';
        printf("%c ", tab[i]);
    }
    printf("\n");
    printf("Sortowanie:\n");
    int c = 0;
    for (i = 0; i < rozmiar - 1; i++) {
        for (j = 0; j < rozmiar - i - 1; j++) {
        if (tab[j] > tab[j+1]) {
            char temp = tab[j];
            tab[j] = tab[j + 1];
            tab[j+1] = temp;
            c++;
        }
        }
    }
    for (i = 0; i < sizeof(tab); i++) {
        printf("%c ", tab[i]);
    }
    printf("\n");
    printf("Ilosc zmian w tablicy: %d", c);

    return 0;
}
