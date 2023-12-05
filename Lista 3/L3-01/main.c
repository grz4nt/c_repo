#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int palindrom(char ciag[]) {
    int lewy = 0;
    int prawy = strlen(ciag) - 1;
    while (lewy < prawy) {
        if (tolower(ciag[lewy]) != tolower(ciag[prawy])) {
            return 0;
        }
        lewy++;
        prawy--;
    }
    return 1;
}

int main() {
    char slowo[100];
    char wybor = 't';
    do {
        printf("Sprawdz czy wyrazenie jest palindromem: ");
        scanf_s("%s", slowo, sizeof(slowo));
        if (palindrom(slowo))
            printf("Tak - Wpisane slowo jest palindromem.\n");
        else
            printf("Nie - Wpisane slowo nie jest palindromem.\n");

        printf("\nCzy chcesz uruchomic program jeszcze raz? [t/n]: ");
        scanf_s(" %c", &wybor, sizeof(wybor));
    } while (wybor == 't' || wybor == 'T');
    return 0;
}
