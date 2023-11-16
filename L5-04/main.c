#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int liczba;
	int liczby[6];
	int duplikat;

	for (int i = 0; i < 5; i++) {
		do
		{
		liczba = rand() % (999 + 1 - 100) + 100;
		duplikat = 0;
		for (int j = 0; j < i; j++) {
			if (liczby[j] == liczba)
				duplikat = 1;
			}
		} while (duplikat == 1);
		liczby[i] = liczba;
	printf("Losowa liczba %d: %d\n", i + 1, liczba);
	}
	return 0;
}