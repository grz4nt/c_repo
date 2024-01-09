#include <stdio.h>
#include <string.h>

typedef struct {
    char imie[30];
    char nazwisko[50];
    short wiek;
    char PESEL[11];
    char email[50];
} tperson;

tperson tablica[100];
int liczba_osob = 0;

void dodaj_element(tperson osoba) {
    if (liczba_osob < 100) {
        tablica[liczba_osob++] = osoba;
    }
}

void usun_element(char* PESEL) {
    int i;
    for (i = 0; i < liczba_osob; i++) {
        if (strcmp(tablica[i].PESEL, PESEL) == 0) {
            for (; i < liczba_osob - 1; i++) {
                tablica[i] = tablica[i + 1];
            }
            liczba_osob--;
            break;
        }
    }
}

tperson* wyszukaj_po_PESEL(char* PESEL) {
    int i;
    for (i = 0; i < liczba_osob; i++) {
        if (strcmp(tablica[i].PESEL, PESEL) == 0) {
            return &tablica[i];
        }
    }
    return NULL;
}

void sortuj_po_nazwisku() {
    int i, j;
    for (i = 0; i < liczba_osob - 1; i++) {
        for (j = 0; j < liczba_osob - i - 1; j++) {
            if (strcmp(tablica[j].nazwisko, tablica[j + 1].nazwisko) > 0) {
                tperson temp = tablica[j];
                tablica[j] = tablica[j + 1];
                tablica[j + 1] = temp;
            }
        }
    }
}

int liczba_pelnoletnich() {
    int i, liczba = 0;
    for (i = 0; i < liczba_osob; i++) {
        if (tablica[i].wiek >= 18) {
            liczba++;
        }
    }
    return liczba;
}

int sprawdz_email(char* email) {
    while (*email) {
        if (*email == '@') {
            return 1;
        }
        email++;
    }
    return 0;
}

int main() {
    int wybor;
    char PESEL[11];
    tperson osoba;

    while (1) {
        printf("1. Dodaj element\n");
        printf("2. Usuń element\n");
        printf("3. Wyszukaj po PESEL\n");
        printf("4. Sortuj po nazwisku\n");
        printf("5. Liczba pełnoletnich\n");
        printf("6. Sprawdź email\n");
        printf("7. Wyjdź\n");
        printf("Wybierz opcję: ");
        scanf("%d", &wybor);

        switch (wybor) {
            case 1:
                printf("Podaj imię, nazwisko, wiek, PESEL i email osoby:\n");
                scanf("%s %s %hd %s %s", osoba.imie, osoba.nazwisko, &osoba.wiek, osoba.PESEL, osoba.email);
                dodaj_element(osoba);
                break;
            case 2:
                printf("Podaj PESEL osoby do usunięcia:\n");
                scanf("%s", PESEL);
                usun_element(PESEL);
                break;
            case 3:
                printf("Podaj PESEL osoby do wyszukania:\n");
                scanf("%s", PESEL);
                tperson* osoba = wyszukaj_po_PESEL(PESEL);
                if (osoba != NULL) {
                    printf("Osoba: %s %s, wiek: %d, PESEL: %s, email: %s\n", osoba->imie, osoba->nazwisko, osoba->wiek, osoba->PESEL, osoba->email);
                } else {
                    printf("Nie znaleziono osoby o podanym numerze PESEL.\n");
                }
                break;
            case 4:
                sortuj_po_nazwisku();
                printf("Posortowano tablicę według nazwiska.\n");
                break;
            case 5:
                printf("Liczba pełnoletnich osób: %d\n", liczba_pelnoletnich());
                break;
            case 6:
                tperson temp;
printf("Podaj adres email do sprawdzenia:\n");
scanf("%s", temp.email);
if (sprawdz_email(temp.email)) {
    printf("Adres email jest poprawny.\n");
} else {
    printf("Adres email jest niepoprawny.\n");
}
break;
            case 7:
                return 0;
            default:
                printf("Nieznana opcja.\n");
        }
    }

    return 0;
}

