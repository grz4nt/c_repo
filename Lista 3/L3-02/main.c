#include <stdio.h>
#include <stdlib.h>


int main() {
	int liczba;
	int x = 1;
	char wybor;
	do {
		printf("Wpisz dowolna liczbe naturalna, nie wieksza niz 10: ");
		scanf_s("%d", &liczba);
		if (liczba <= 10 && liczba >= 0) {
			for (int i = 1; i <= liczba; i++)
			x *= i;
			printf("Silnia liczby %d = %d", liczba, x);
		}
		else {
			printf("Wpisana liczba nie jest naturalna.\n");
		}
		printf("\nCzy chcesz uruchomic program jeszcze raz? [t/n]: ");
		scanf_s(" %c", &wybor, sizeof(wybor));
		x = 1;
	} while (wybor == 't' || wybor == 'T');
	return 0;
}