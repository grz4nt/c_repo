#include <stdio.h>
#include <stdlib.h>

int lowest(int a[]) {
	int min = a[0];
	for (int i = 1; i < 5; i++) {
		if (a[i] < min)
			min = a[i];
	}
	return min;
}

int main() {
	int liczby[5];
	int wynik;
	printf("Wpisz 5 dowolnych liczb\n");
	for (int i = 0; i < 5; i++) {
		printf("Liczba %d: ", i + 1);
		scanf_s("%d", &liczby[i], sizeof(liczby[i]));
	}
	wynik = lowest(liczby);
	printf("Liczba o najmniejszej wartosci to: %d", wynik);
	return 0;
}
