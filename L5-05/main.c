#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char imie[20];
    char nazwisko[20];
    int rok_u, mies_u, dzien_u;
} tosoba;

int main() {
    srand(time(NULL));
    tosoba student;

    sprintf_s(student.imie, sizeof(student.imie), "Imie %d", rand() % 100);
    sprintf_s(student.nazwisko, sizeof(student.nazwisko), "Naz %d", rand() % 100);
    student.rok_u = rand() % (2000 - 1900) + 1900;
    student.mies_u = rand() % 12 + 1;
    student.dzien_u = rand() % 31 + 1;
    student.id = rand() % 100 + 1;

    printf("%s\n", student.imie);
    printf("%s\n", student.nazwisko);
    printf("Data urodzenia: %d/%d/%d\n", student.dzien_u, student.mies_u, student.rok_u);
    printf("ID: %d\n", student.id);

    return 0;
}