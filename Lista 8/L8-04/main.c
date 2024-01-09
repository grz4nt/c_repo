#include <stdio.h>

void ciag(int x) {
	int c;
	printf("Ciag: {0, ");
	for (int i = 1; i < x; i++) {
		c = i * i * i;
		printf("%d, ", c);
	}
	printf("%d}\n", x * x * x);
}

int ciagSuma(int x) {
	int suma = 0;
	for (int i = 1; i <= x; i++) {
		suma += i * i * i;
	}
	return suma;
}

int main() {
	int k;
	printf("Wpisz k: ");
	scanf_s("%d", &k);
	ciag(k);
	int wynik = ciagSuma(k);
	printf("Suma liczb to: %d", wynik);
	return 0;
}