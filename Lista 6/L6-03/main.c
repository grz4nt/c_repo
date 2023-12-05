#include <stdio.h>
#include <string.h>

typedef struct {
	int id;
	char imie[20];
	char nazwisko[20];
	int wiek;
} Osoba;

int main() {
	char odp;
	int i;
	char wzorzec[20];

	Osoba arr[5];
	for (i = 0; i < 5; i++) {
		arr[i].id = i + 1;
		printf("ID: %d\n", arr[i].id);
		printf("Imie: ", i+1);
		scanf_s("%s", arr[i].imie, sizeof(wzorzec));
		printf("Nazwisko: ", i+1);
		scanf_s("%s", arr[i].nazwisko, sizeof(wzorzec));
		printf("Wiek: ", i+1);
		scanf_s("%d", &arr[i].wiek, sizeof(int));
		printf("\n");
	}
	printf("\n");
	printf("Podaj wzorzec (imie): ");
	scanf_s("%s", wzorzec, sizeof(wzorzec));

	for (i = 0; i < 5; i++) {
		if (strcmp(wzorzec, arr[i].imie) == 0) {
			printf("ID: %d\n", arr[i].id);
			printf("Imie: %s\n", arr[i].imie);
			printf("Nazwisko: %s\n", arr[i].nazwisko);
			printf("Wiek: %d\n", arr[i].wiek);
		}
		printf("\n");
	}

	return 0;
}