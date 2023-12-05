#include <stdio.h>
#include <stdlib.h>


int main() {
	int i, liczby[10], lowest, highest;
	char wybor;

	do {
		printf("Wpisz 10 dowolnych liczb rzeczywistych: \n");
		for (i = 0; i < 10; i++) {
			printf("Liczba %d: ", i + 1);
			scanf_s("%d", &liczby[i], sizeof(liczby[i]));
		}

		lowest = liczby[0];
		highest = liczby[0];

		for (i = 1; i < 10; i++) {
			if (liczby[i] < lowest)
				lowest = liczby[i];
			else if (liczby[i] > highest)
				highest = liczby[i];
		}

		printf("Liczba minimalna: %d\n", lowest);
		printf("Liczba maksymalna: %d\n", highest);
		printf("\nCzy chcesz wykonac ten program jeszcze raz? [t/n]: ");
		scanf_s(" %c", &wybor, sizeof(wybor));
	} while (wybor == 't' || wybor == 'T');

	return 0;
}