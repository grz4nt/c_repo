#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int losowaTablica(float (*tab)[10], int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			tab[i][j] = (float)(rand() % 2001 - 1000) / 100;
		}
	}
}

int main() {
	int n;
	float tablica[10][10];
	do {
		printf("Podaj N (1-10): ");
		scanf_s("%d", &n);
		if (n < 1 || n > 10) {
			printf("N musi byc z zakresu 1-10\n");
		}
	} while (n < 1 || n > 10);

	losowaTablica(tablica, n);
	printf("\nTablica %dx%d z losowymi liczbami z zakresu <-10,10>\n", n, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%.2f\t", tablica[i][j]);
		}
		printf("\n");
	}
	return 0;
}